// Name: SHUBHANSHU SINGH
// Reg.No : 2021PGCACA054
// Assignment : 03
// Question : 02

#include <iostream>
#include <algorithm>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denomenator;

public:
    Fraction()
    // default constructor
    {
        numerator = 0, denomenator = 1;
    }

    Fraction(int numerator, int denomenator)
    // parameterized constructor
    {
        this->numerator = numerator;
        this->denomenator = denomenator;
    }

    ~Fraction()
    // destructor
    {
        cout << "Object destroyed for class Fraction!\n";
    }

    void getFraction()
    // accessor
    {
        cout << "Fraction : " << numerator << "/" << denomenator << "\n";
    }

    void setFraction(int numerator, int denomenator)
    // mutator
    {
        this->numerator = numerator;
        this->denomenator = denomenator;
    }

    void addFraction(Fraction f1, Fraction f2)
    // add two Fractions
    {

        int lcm = (f1.denomenator * f2.denomenator) / (__gcd(f1.denomenator, f2.denomenator));
        this->denomenator = lcm;
        this->numerator = (f1.numerator * (lcm / f1.denomenator)) + (f2.numerator * (lcm / f2.denomenator));

        int gcD = __gcd(numerator, denomenator);
        numerator = numerator / gcD;
        denomenator = denomenator / gcD;
    }

    void reduceFraction(Fraction f1)
    // reduce fraction
    {
        int gcD = __gcd(f1.numerator, f1.denomenator);
        f1.numerator = f1.numerator / gcD;
        f1.denomenator = f1.denomenator / gcD;

        cout << "Reduced fraction: " << f1.numerator << "/" << f1.denomenator << "\n";
    }

    void divFraction(Fraction f1, Fraction f2)
    // divide two fraction
    {
        this->numerator = f1.numerator * f2.denomenator;
        this->denomenator = f1.denomenator * f2.numerator;
        int gcD = __gcd(numerator, denomenator);
        numerator = numerator / gcD;
        denomenator = denomenator / gcD;
    }
};

int main()
{
    int numerator, denomenator;
    cout << "--------------------------\n";
    cout << "Enter Numerator: ";
    cin >> numerator;

    cout << "Enter Denomenator: ";
    cin >> denomenator;
    cout << "--------------------------\n";

    Fraction f1(numerator, denomenator), f2, f3, f4, f5, f6;
    
    int new_numerator, new_denomenator;
    int choice = 1;
    while (choice != 6)
    {
        cout << "\tChoose one option \n";
        cout << "--------------------------\n";
        cout << "1 - Get Fraction\n";
        cout << "2 - Set Fraction\n";
        cout << "3 - Add Fraction\n";
        cout << "4 - Reduce Fraction\n";
        cout << "5 - Divide Fraction\n";
        cout << "6 - Exit\n";
        cout << "--------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {

        case 1:
            f1.getFraction();
            break;

        case 2:
            cout << "Enter new numerator: ";
            cin >> new_numerator;
            cout << "Enter new denominator: ";
            cin >> new_denomenator;
            f1.setFraction(new_numerator, new_denomenator);
            break;

        case 3:
            // data for first fraction
            cout << "Enter numerator for 1st Fraction: ";
            cin >> new_numerator;
            cout << "Enter denominator for 1st Fraction: ";
            cin >> new_denomenator;
            f2.setFraction(new_numerator, new_denomenator);

            // data for second fraction
            cout << "Enter numerator for 2nd Fraction: ";
            cin >> new_numerator;
            cout << "Enter denominator for 2nd Fraction: ";
            cin >> new_denomenator;
            f3.setFraction(new_numerator, new_denomenator);

            // add
            f1.addFraction(f2, f3);
            break;

        case 4:

            cout << "Enter numerator: ";
            cin >> new_numerator;
            cout << "Enter denominator: ";
            cin >> new_denomenator;
            f6.setFraction(new_numerator, new_denomenator);
            // reduce
            f1.reduceFraction(f6);
            break;

        case 5:
            cout << "Enter numerator for 1st Fraction: ";
            cin >> new_numerator;
            cout << "Enter denominator for 1st Fraction: ";
            cin >> new_denomenator;
            f4.setFraction(new_numerator, new_denomenator);

            cout << "Enter numerator for 2nd Fraction: ";
            cin >> new_numerator;
            cout << "Enter denominator for 2nd Fraction: ";
            cin >> new_denomenator;
            f5.setFraction(new_numerator, new_denomenator);

            // division
            f1.divFraction(f4, f5);
            break;

        case 6:
            cout << "Program Exited!\n";
            break;

        default:
            cout << "This is not the choice. Try again...\n";
            break;
        }
        cout << "--------------------------\n";
    }

    return 0;
}