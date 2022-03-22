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
        this - num = num;
    }

    // 3. Destructor
    ~Number()
    {
        cout << "object destroyed for class Num" << endl;
    }

    // 4. Accessor
    int getNumber()
    {
        return n;
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
        for (int i = 2; i * i <= n; i++)
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

        return n;
    }
}