// Assignment 5
// Question 4
// 2021pgcaca050

#include <iostream>
#include <algorithm>

using namespace std;

class MixedFraction;

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

    int getNumerator()
    {
        return num;
    }

    int getDenominator()
    {
        return denom;
    }

    friend void operator<<(ostream &out, Fraction &f);
    friend void operator>>(istream &in, Fraction &f);

    // Operator function for type conversion 1
    operator float()
    {
        return (float)num / denom;
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

class MixedFraction
{
private:
    int num;
    int denom;

public:
    MixedFraction() {}

    // Constructor for type conversion 2
    MixedFraction(Fraction f)
    {
        num = f.getNumerator();
        denom = f.getDenominator();
    }

    int getNumerator()
    {
        return num;
    }

    int getDenominator()
    {
        return denom;
    }

    void setFraction(int num, int denom)
    {
        this->num = num;
        this->denom = denom;
    }

    friend void operator<<(ostream &out, MixedFraction &f);
};

void operator<<(ostream &out, MixedFraction &f)
{

    if (f.getNumerator() < f.getDenominator())
        out << f.num << "/" << f.denom << endl;
    else
        out << f.num / f.denom << "-" << f.num / f.denom << "/" << f.denom << endl;
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