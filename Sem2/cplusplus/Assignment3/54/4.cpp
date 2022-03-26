// Name: SHUBHANSHU SINGH
// Reg.No : 2021PGCACA054
// Assignment : 03
// Question : 04

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    Time()
    // default constructor
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int hour, int minute, int second)
    // parameterized constructor
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    ~Time()
    // destructor
    {
        cout << "object destroyed for class Time \n";
    }

    void getTime()
    // getTime()
    {
        cout << "Time : ";
        if (hour <= 9)
            cout << "0" << hour;
        else
            cout << hour;

        cout << ":";

        if (minute <= 9)
            cout << "0" << minute;
        else
            cout << minute;

        cout << ":";

        if (second <= 9)
            cout << "0" << second;
        else
            cout << second;

        if (hour > 12)
            cout << " PM";
        else
            cout << " AM";
        cout << "\n";
    }

    void setTime(int hour, int minute, int second)
    // set time
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void calcTimeDifference(Time t1, Time t2)
    // diff b/w two times
    {

        int second1 = (t1.hour * 3600) + (t1.minute * 60) + t1.second;
        int second2 = (t2.hour * 3600) + (t2.minute * 60) + t2.second;
        int result = abs(second1 - second2);
        this->hour = result / 3600;
        result = result % 3600;
        this->minute = result / 60;
        result = result % 60;
        this->second = result;
    }

    void resetTime()
    // reset time
    {
        hour = minute = second = 0;
    }
};

int main()
{
    int h, m, s;
    cout << "---------------------------\n";
    cout << "Enter Hour: ";
    cin >> h;
    cout << "Enter Minute: ";
    cin >> m;
    cout << "Enter Second: ";
    cin >> s;
    cout << "---------------------------\n";

    Time t1, t2, t3;
    t1.setTime(h, m, s);

    int choice = 1;
    while (choice != 5)
    {
        cout << "\tChoose one option \n";
        cout << "--------------------------\n";
        cout << "1 - Get time \n";
        cout << "2 - Set time \n";
        cout << "3 - Calculate time difference \n";
        cout << "4 - Reset time \n";
        cout << "5 - Exit \n";
        cout << "--------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            t1.getTime();
            break;

        case 2:
            cout << "Enter hour: ";
            cin >> h;
            cout << "Enter minute: ";
            cin >> m;
            cout << "Enter second: ";
            cin >> s;
            t1.setTime(h, m, s);
            break;

        case 3:
            cout << "Details for 1st Time class\n";
            cout << "Enter hour: ";
            cin >> h;
            cout << "Enter minute: ";
            cin >> m;
            cout << "Enter second: ";
            cin >> s;
            t2.setTime(h, m, s);

            cout << "Details for 2nd Time class\n";
            cout << "Enter hour: ";
            cin >> h;
            cout << "Enter minute: ";
            cin >> m;
            cout << "Enter second: ";
            cin >> s;
            t3.setTime(h, m, s);

            t1.calcTimeDifference(t2, t3);
            break;

        case 4:
            t1.resetTime();
            break;

        case 5:
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