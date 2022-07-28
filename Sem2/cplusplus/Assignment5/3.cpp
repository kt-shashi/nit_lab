// Assignment 9
// Question 2
// 2021pgcaca050

#include <iostream>
#include <algorithm>

using namespace std;

class Fraction
{
private:
    int num;
    int denom;

public:
    Fraction()
    {
        num = 0, denom = 1;
    }

    Fraction(int num, int denom)
    {
        this->num = num;
        this->denom = denom;
    }

    void getFraction()
    {
        cout << num << "/" << denom << endl;
    }

    void setFraction(int num, int denom)
    {
        this->num = num;
        this->denom = denom;
    }

    // Overloading

    void operator++(){

        Fraction f3;

        f3.num=this->num + this->denom;
        f3.denom=this->denom;

        int gcD = __gcd(f3.num, f3.denom);
        f3.num = f3.num / gcD;
        f3.denom = f3.denom / gcD;

        this->num=f3.num;
        this->denom=f3.denom;

    }

    void operator++(int){

        Fraction f3;

        f3.num=this->num + this->denom;
        f3.denom=this->denom;

        int gcD = __gcd(f3.num, f3.denom);
        f3.num = f3.num / gcD;
        f3.denom = f3.denom / gcD;

        this->num=f3.num;
        this->denom=f3.denom;

    }

    friend void operator--(Fraction &f,int);
    friend void operator--(Fraction &f);

    friend void operator << (ostream &out, Fraction &f);
    friend void operator >> (istream &in, Fraction &f);
};

void operator--(Fraction &f){

    Fraction f3;

    f3.num=f.denom - f.num;
    f3.denom=f.denom;

    int gcD = __gcd(f3.num, f3.denom);
    f3.num = f3.num / gcD;
    f3.denom = f3.denom / gcD;

    f.num=f3.num;
    f.denom=f3.denom;

}

void operator--(Fraction &f,int){

    Fraction f3;

    f3.num=f.denom - f.num;
    f3.denom=f.denom;

    int gcD = __gcd(f3.num, f3.denom);
    f3.num = f3.num / gcD;
    f3.denom = f3.denom / gcD;

    f.num=f3.num;
    f.denom=f3.denom;

}

void operator << (ostream &out, Fraction &f){

    out<<f.num<<"/"<<f.denom<<endl;

}

void operator >> (istream &in, Fraction &f){

    cout<<"Enter numerator: ";
    in>>f.num;

    cout<<"Enter denominator: ";
    in>>f.denom;

}

int main(){

    Fraction f3;

    cin>>f3;
    cout<<"Pre Increment: ";
    ++f3;
    cout<<f3;

    cin>>f3;
    cout<<"Post Increment: ";
    f3++;
    cout<<f3;

    cin>>f3;
    cout<<"Pre Decrement: ";
    --f3;
    cout<<f3;

    cin>>f3;
    cout<<"Post Decrement: ";
    f3--;
    cout<<f3;

    return 0;

}

