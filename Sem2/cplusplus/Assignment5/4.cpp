// Assignment 5
// Question 4
// 2021pgcaca050

#include <iostream>
#include <algorithm>

using namespace std;

class MixedFraction
{
private:
    int x;
    int num;
    int denom;

public:
    MixedFraction() {}

    MixedFraction(int x1, int num1, int denom1)
    {
        x = x1;
        num = num1;
        denom = denom1;
    }

    friend void operator<<(ostream &out, MixedFraction &f);
};

void operator<<(ostream &out, MixedFraction &f)
{
    out << f.x << " " << f.num << "/" << f.denom << endl;
}
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

    friend void operator<<(ostream &out, Fraction &f);
    friend void operator>>(istream &in, Fraction &f);

    // Operator function for type conversion 1
    operator float()
    {
        return (float)num / denom;
    }

    // Operator function for type conversion 2
    operator MixedFraction()
    {
        int a = this->num / this->denom;
        int b = this->num % this->denom;
        int c = this->denom;
        return MixedFraction(a, b, c);
    }
};

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
    Fraction f;
    cin >> f;

    float newValue = f;
    cout << "Conversion to float: " << newValue << endl;

    MixedFraction mf;
    mf = f;
    cout << "Conversion to Mixed Fraction: " << endl;
    cout << mf;
}