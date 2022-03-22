#include <iostream>
using namespace std;

class Fraction
{
private:
    int num;
    int denom;

public:
    // 1. Default constructor
    Fraction()
    {
        num = 0, denom = 1;
    }

    // 2. Parameterized constructor
    Fraction(int num, int denom)
    {
        this->num = num;
        this->denom = denom;
    }

    // 3. Destructor
    ~Fraction()
    {
        cout << "object destroyed for class Fraction" << endl;
    }

    // 4. Accessor
    void getFraction()
    {
        cout << num << "/" << denom << endl;
    }

    // 5. Mutator
    void setFraction(int num, int denom)
    {
        this->num = num;
        this->denom = denom;
    }

    // 6. Add two Fractions
    void addFraction(Fraction f1, Fraction f2)
    {
    }

    // 7. Reduce fraction
    void reduceFraction(Fraction)
    {
        int gcD = __gcd(num, denom);
        num = num / gcD;
        denom = denom / gcD;
    }

    // 8. Divide two fraction
    void divFraction(Fraction f1, Fraction f2)
    {
    }
}