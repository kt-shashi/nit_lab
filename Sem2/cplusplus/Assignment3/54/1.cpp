// Name: SHUBHANSHU SINGH
// Reg.No : 2021PGCACA054
// Assignment : 03
// Question : 01

#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

class Number
{
private:
    int num;

public:
    Number()
    // default constructor
    {
        num = 0;
    }

    Number(int num)
    // parameterized constructor
    {
        this->num = num;
    }

    ~Number()
    // destructor
    {

        cout << "object destroyed for class Num\n";
    }

    int getNumber()
    // accessor
    {
        return num;
    }

    void changeNumber(int num)
    // mutator
    {
        this->num = num;
    }

    bool isArmstrong()
    // armstrong
    {
        int copy = num, digit = 0;
        while (copy > 0)
        {
            digit++;
            copy /= 10;
        }
        long long sum = 0;
        copy = num;
        while (copy > 0)
        {
            int last_digit = copy % 10;
            sum = sum + pow(last_digit, digit);
            copy = copy / 10;
        }

        return (num == sum);
    }

    bool isPrime()
    // prime
    {
        if (num <= 1)
            return false;

        for (int j = 2; j * j <= num; j++)
            if (num % j == 0)
                return false;

        return true;
    }

    int nextCoprime()
    // coprime
    {
        return num + 1;
    }

    int reverse()
    // reverse
    {
        int rever = 0;
        int temp = num;
        while (temp > 0)
        {
            int last_Digit = temp % 10;
            rever = (rever * 10) + last_Digit;
            temp = temp / 10;
        }
        return rever;
    }
};

int main()
{
    int num;
    cout << "---------------------------\n";
    cout << " Enter a Number : ";
    cin >> num;
    cout << "---------------------------\n";
    Number n1(num);

    int choice = 1;
    while (choice != 7)
    {
        cout << "\tChoose one option \n";
        cout << "--------------------------\n";

        cout << "1 - Get number\n";
        cout << "2 - Change number\n";
        cout << "3 - Check if number is Armstrong\n";
        cout << "4 - Check if number is Prime\n";
        cout << "5 - Find CoPrime\n";
        cout << "6 - Reverse the number\n";
        cout << "7 - Exit\n";
        cout << "--------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Number : " << n1.getNumber() << "\n";
            break;

        case 2:
            cout << "Enter new number: ";
            cin >> num;
            n1.changeNumber(num);
            break;

        case 3:
            if (n1.isArmstrong())
                cout << "Number is Armstrong \n";
            else
                cout << "Number is Not Armstrong \n";
            break;

        case 4:
            if (n1.isPrime())
                cout << "Number is Prime \n";
            else
                cout << "Number is Not Prime \n";
            break;

        case 5:
            cout << "Next coprime is: " << n1.nextCoprime() << "\n";
            break;

        case 6:
            cout << "Reverse: " << n1.reverse() << "\n";
            break;

        case 7:
            cout << "Program Exited!\n";
            exit(0);
            break;

        default:
            cout << "This is not the choice. Try again...\n";
            break;
        }
        cout << "--------------------------\n";
    }
    return 0;
}
