#include <iostream>
#include <math.h>

using namespace std;

class Number
{
private:
    int num;

public:
    // 1. Default constructor
    Number()
    {
        num = 0;
    }

    // 2. Parameterized constructor
    Number(int num)
    {
        this->num = num;
    }

    // 3. Destructor
    ~Number()
    {
        cout << "object destroyed for class Num" << endl;
    }

    // 4. Accessor
    int getNumber()
    {
        return num;
    }

    // 5. Mutator
    void changeNumber(int num)
    {
        this->num = num;
    }

    // 6. Armstrong
    bool isArmstrong()
    {

        // Count digits
        int digits = 0;
        int copy = num;
        while (copy > 0)
        {
            digits++;
            copy /= 10;
        }

        // Find sum
        int sum = 0;
        copy = num;
        while (copy > 0)
        {
            int lastDigit = copy % 10;
            sum = sum + pow(lastDigit, digits);
            copy /= 10;
        }

        return (num == sum);
    }

    // 7. Prime
    bool isPrime()
    {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; i++)
            if (num * i == 0)
                return false;
        return true;
    }

    // 8. Coprime
    int nextCoprime()
    {
    }

    // 9. Reverse
    int reverse()
    {
        int rev = 0;
        int n = num;

        while (n > 0)
        {
            int lastDigit = n % 10;
            rev = (rev * 10) + lastDigit;
            n /= 10;
        }

        return rev;
    }
};

int main()
{

    int input;
    cout << "Enter a number: ";
    cin >> input;

    Number n1(input);

    int flag = 1;
    while (flag)
    {

        cout << "1. Get number" << endl;
        cout << "2. Change number" << endl;
        cout << "3. Check if number is Armstrong" << endl;
        cout << "4. Check if number is Prime" << endl;
        cout << "5. Check if number is CoPrime" << endl;
        cout << "6. Reverse the number" << endl;
        cout << "7. Exit" << endl
             << endl;
        cout << "Enter choice: ";
        cin >> input;

        switch (input)
        {

        case 1:

            cout << "Number: " << n1.getNumber() << endl;
            break;

        case 2:

            cout << "Enter new number: ";
            cin >> input;
            n1.changeNumber(input);
            break;

        case 3:

            if (n1.isArmstrong())
                cout << "Number is Armstrong " << endl;
            else
                cout << "Number is Not Armstrong " << endl;
            break;

        case 4:

            if (n1.isPrime())
                cout << "Number is Prime " << endl;
            else
                cout << "Number is Not Prime " << endl;
            break;

        case 5:

            cout << "Next coprime is: " << n1.nextCoprime() << endl;
            break;

        case 6:

            cout << "Reverse: " << n1.reverse() << endl;
            break;

        case 7:

            flag = 0;
            break;

        default:

            cout << "Invalid input" << endl;
            break;
        }
    }
}