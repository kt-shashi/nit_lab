#include <iostream>

using namespace std;

class Time
{

private:
    int hour;
    int minute;
    int second;

public:
    // 1. Default constructor
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // 2. Parameterized constructor
    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    // 3. Destructor
    ~Time()
    {
        cout << "object destroyed for class Time" << endl;
    }

    // 4. getTime()
    void getTime()
    {

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
            cout << "PM";
        else
            cout << "AM";
        cout << endl;
    }

    // 5. setTime
    void setTime(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    // 6. Calculate time difference
    void calcTimeDifference(Time t1, Time t2)
    {
    }

    // 7. Reset time
    void resetTime()
    {
        hour = minute = second = 0;
    }
};

int main()
{

    Time t1, t2, t3;
    int h, m, s;

    cout << "Enter hour: ";
    cin >> h;
    cout << "Enter minute: ";
    cin >> m;
    cout << "Enter second: ";
    cin >> s;

    t1.setTime(h, m, s);

    int flag = 1, input;
    while (flag)
    {

        cout << endl
             << "1. Get time" << endl;
        cout << "2. Set time" << endl;
        cout << "3. Calculate time difference" << endl;
        cout << "4. Reset time" << endl;
        cout << "5. Exit" << endl
             << endl;
        cout << "Enter choice: ";
        cin >> input;

        switch (input)
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

            cout << "Enter hour for 1st Time class: ";
            cin >> h;
            cout << "Enter minute for 1st Time class: ";
            cin >> m;
            cout << "Enter second for 1st Time class: ";
            cin >> s;
            t2.setTime(h, m, s);

            cout << "Enter hour for 2nd Time class: ";
            cin >> h;
            cout << "Enter minute for 2nd Time class: ";
            cin >> m;
            cout << "Enter second for 2nd Time class: ";
            cin >> s;
            t3.setTime(h, m, s);

            t1.calcTimeDifference(t2, t3);

            break;

        case 4:

            t1.resetTime();

            break;

        case 5:

            flag = 0;
            break;

        default:

            cout << "Invalid input" << endl;
            break;
        }
    }
}