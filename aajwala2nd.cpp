// Name: SHUBHANSHU SINGH
// Reg.No : 2021PGCACA054
// Assignment : 04
// Question : 02

#include <iostream>

using namespace std;

class Partners
{

private:
    int partnerid;
    double contribute_amount;

public:
    static double companyfund;

    Partners() {}

    Partners(int partnerid, double contribute_amount)
    {
        this->partnerid = partnerid;
        this->contribute_amount = contribute_amount;

        companyfund += contribute_amount;
    }

    void addamount(doubel amount)
    {
        contribute_amount += amount;
        companyfund += amount;
    }

    static void payBills(double amount)
    {
        companyfund -= amount;
    }

    void withdrawamount(double amount)
    {
        contribute_amount -= amount;
        companyfund -= amount;
    }
};

int Partners::companyfund = 0;

int main()
{
    return 0;
}