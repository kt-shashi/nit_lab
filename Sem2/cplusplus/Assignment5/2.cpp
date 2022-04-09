// Assignment 5
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

    Fraction operator+(int n){

        Fraction f3;

        f3.num=this->num+ (n * this->denom);
        f3.denom=this->denom;

        int gcD = __gcd(f3.num, f3.denom);
        f3.num = f3.num / gcD;
        f3.denom = f3.denom / gcD;

        return f3;
    }

    friend Fraction operator-(int n,Fraction &f);

    friend void operator << (ostream &out, Fraction &f);
    friend void operator >> (istream &in, Fraction &f);
};


Fraction operator-(int n, Fraction &f){

    Fraction f3;

    f3.num=f.num - (n * f.denom);
    f3.denom=f.denom;

    int gcD = __gcd(f3.num, f3.denom);
    f3.num = f3.num / gcD;
    f3.denom = f3.denom / gcD;

    return f3;

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

    Fraction f1,f3;
    cin>>f1;
    cout<<"Enter integer to add: ";
    int n;
    cin>>n;

    cout<<"Addition: ";
    f3=f1+n;
    cout<<f3;

    cout<<"Subtraction: ";
    f3=n-f1;
    cout<<f3;

    return 0;

}

