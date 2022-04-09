#include <iostream>
#include <iomanip>

using namespace std;

class Account
{

private:
    int accountno;
    double balance;
    static double totalbal;

public:
    Account()
    {
        accountno = 0;
        balance = 0;
    }

    // 1. Parameterized constructor
    Account(int accountno, double balance)
    {
        this->accountno = accountno;
        this->balance = balance;
    }

    // 2. Destructor
    ~Account()
    {
        totalbal -= balance;
    }

    // 3. deposite
    void deposite(double balance)
    {
        this->balance += balance;
        totalbal += balance;
    }

    // 4. Withdraw
    void withdraw(double balance)
    {
        this->balance -= balance;
        totalbal -= balance;
    }

    // 5. add to bank
    static void addtobank(double amount)
    {
        totalbal += amount;
    }

    // 6. deduct from bank
    static void deductfrombank(double amount)
    {
        totalbal -= amount;
    }

    void viewBalance()
    {
        cout << "Account number: " << accountno << endl;
        cout << "Balance: Rs." << fixed << setprecision(2) << balance << endl;
    }
};

double Account::totalbal = 0;

int main()
{

    int accountNumber, balance;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter balance: ";
    cin >> balance;

    Account *a = new Account(accountNumber, balance);

    int n = 1;
    while (n)
    {
        cout << "Menu" << endl;
        cout << "1. Deposite money " << endl;
        cout << "2. Withdraw money " << endl;
        cout << "3. Add money to bank " << endl;
        cout << "4. Deduct money from bank " << endl;
        cout << "5. View Balance " << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";

        int ch;
        double amount;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter amount to deposite: ";
            cin >> amount;
            a->deposite(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            a->withdraw(amount);
            break;
        case 3:
            cout << "Enter amount to add to bank: ";
            cin >> amount;
            a->addtobank(amount);
            break;
        case 4:
            cout << "Enter the amount to deduct from bank: ";
            cin >> amount;
            a->deductfrombank(amount);
            break;
        case 5:
            a->viewBalance();
            break;
        case 6:
            n = 0;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }

    return 0;
}
