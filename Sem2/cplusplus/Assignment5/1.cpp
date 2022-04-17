// Assignment 5
// Question 1
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

    Fraction operator+(Fraction f1)
    {

        Fraction f3;

        int lcm = (this->denom * f1.denom) / (__gcd(this->denom, f1.denom));
        f3.denom = lcm;
        f3.num = (this->num * (lcm / this->denom)) + (f1.num * (lcm / f1.denom));

        int gcD = __gcd(f3.num, f3.denom);
        f3.num = f3.num / gcD;
        f3.denom = f3.denom / gcD;

        return f3;
    }

    Fraction operator-(Fraction f1)
    {

        Fraction f3;

        int lcm = (this->denom * f1.denom) / (__gcd(this->denom, f1.denom));
        f3.denom = lcm;
        f3.num = (this->num * (lcm / this->denom)) - (f1.num * (lcm / f1.denom));

        int gcD = __gcd(f3.num, f3.denom);
        f3.num = f3.num / gcD;
        f3.denom = f3.denom / gcD;

        return f3;
    }

    Fraction operator*(Fraction f2)
    {

        Fraction f3;

        f3.num = this->num * f2.num;
        f3.denom = this->denom * f2.denom;

        int gcD = __gcd(f3.num, f3.denom);
        f3.num = f3.num / gcD;
        f3.denom = f3.denom / gcD;

        return f3;
    }

    friend Fraction operator/(Fraction f1, Fraction f2);
    friend void operator<<(ostream &out, Fraction &f);
    friend void operator>>(istream &in, Fraction &f);
};

Fraction operator/(Fraction f1, Fraction f2)
{

    Fraction f3;

    f3.num = f1.num * f2.denom;
    f3.denom = f1.denom * f2.num;

    int gcD = __gcd(f3.num, f3.denom);
    f3.num = f3.num / gcD;
    f3.denom = f3.denom / gcD;

    return f3;
}

void operator<<(ostream &out, Fraction &f)
{

    out << f.num << "/" << f.denom << endl;
}

void operator>>(istream &in, Fraction &f)
{

    cout << "Enter numerator: ";
    in >> f.num;

    cout << "Enter denominator: ";
    in >> f.denom;
}

int main()
{

    int n1, d1, n2, d2;
    cout << "Enter numerator for 1st fraction: ";
    cin >> n1;
    cout << "Enter denominator for 1st fraction: ";
    cin >> d1;

    cout << "Enter numerator for 2nd fraction: ";
    cin >> n2;
    cout << "Enter denominator for 2nd fraction: ";
    cin >> d2;

    Fraction f1(n1, d1), f2(n2, d2);
    Fraction f3;

    f3 = f1 + f2;
    cout << "Addition: ";
    f3.getFraction();

    f3 = f1 - f2;
    cout << "Subtraction: ";
    f3.getFraction();

    f3 = f1 * f2;
    cout << "Multiplication: ";
    f3.getFraction();

    f3 = f1 / f2;
    cout << "Division: ";
    f3.getFraction();

    cout << "Overloading input stream and output stream: " << endl;
    cin >> f3;
    cout << f3;

    return 0;
}
