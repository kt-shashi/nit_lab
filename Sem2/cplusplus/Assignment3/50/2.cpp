// Assignment 3 Program 2
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
#include <algorithm>

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

        int lcm = (f1.denom * f2.denom) / (__gcd(f1.denom, f2.denom));
        this->denom = lcm;
        this->num = (f1.num * (lcm / f1.denom)) + (f2.num * (lcm / f2.denom));

        int gcD = __gcd(num, denom);
        num = num / gcD;
        denom = denom / gcD;
    }

    // 7. Reduce fraction
    void reduceFraction(Fraction f1)
    {
        int gcD = __gcd(f1.num, f1.denom);
        f1.num = f1.num / gcD;
        f1.denom = f1.denom / gcD;

        cout << "Reduced fraction: " << f1.num << "/" << f1.denom << endl;
    }

    // 8. Divide two fraction
    void divFraction(Fraction f1, Fraction f2)
    {
        this->num = f1.num * f2.denom;
        this->denom = f1.denom * f2.num;

        int gcD = __gcd(num, denom);
        num = num / gcD;
        denom = denom / gcD;
    }
};

int main()
{

    int n, d;
    cout << "Enter numerator: ";
    cin >> n;
    cout << "Enter denomenator: ";
    cin >> d;

    Fraction f1(n, d), f2, f3, f4, f5, f6;

    int newNum, newDen;
    int flag = 1, input;
    while (flag)
    {

        cout << endl
             << "1. Get fraction" << endl;
        cout << "2. Set fraction" << endl;
        cout << "3. Add fraction" << endl;
        cout << "4. Reduce fraction" << endl;
        cout << "5. Divide fraction" << endl;
        cout << "6. Exit" << endl
             << endl;
        cout << "Enter choice: ";
        cin >> input;

        switch (input)
        {

        case 1:

            f1.getFraction();
            break;

        case 2:

            cout << "Enter new numerator: ";
            cin >> newNum;
            cout << "Enter new denominator: ";
            cin >> newDen;
            f1.setFraction(newNum, newDen);

            break;

        case 3:

            cout << "Enter numerator for 1st Fraction: ";
            cin >> newNum;
            cout << "Enter denominator for 1st Fraction: ";
            cin >> newDen;

            f2.setFraction(newNum, newDen);

            cout << "Enter numerator for 2nd Fraction: ";
            cin >> newNum;
            cout << "Enter denominator for 2nd Fraction: ";
            cin >> newDen;

            f3.setFraction(newNum, newDen);

            f1.addFraction(f2, f3);

            break;

        case 4:

            cout << "Enter numerator: ";
            cin >> newNum;
            cout << "Enter denominator: ";
            cin >> newDen;

            f6.setFraction(newNum, newDen);

            f1.reduceFraction(f6);
            break;

        case 5:

            cout << "Enter numerator for 1st Fraction: ";
            cin >> newNum;
            cout << "Enter denominator for 1st Fraction: ";
            cin >> newDen;

            f4.setFraction(newNum, newDen);

            cout << "Enter numerator for 2nd Fraction: ";
            cin >> newNum;
            cout << "Enter denominator for 2nd Fraction: ";
            cin >> newDen;

            f5.setFraction(newNum, newDen);

            f1.divFraction(f4, f5);

            break;

        case 6:

            flag = 0;
            break;

        default:

            cout << "Invalid input" << endl;
            break;
        }
    }
}