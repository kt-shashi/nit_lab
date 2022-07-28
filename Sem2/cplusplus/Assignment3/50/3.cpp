// Assignment 3 Program 3
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <bits/stdc++.h>
// #include <math.h>

using namespace std;

class Point2D
{

private:
    int xCo;
    int yCo;

public:
    // 1. Default constructor
    Point2D()
    {
        xCo = yCo = 0;
    }

    // 2. parameterized constructor
    Point2D(int xCo, int yCo)
    {
        this->xCo = xCo;
        this->yCo = yCo;
    }

    // 3. Destructor
    ~Point2D()
    {
        cout << "object destroyed for class Point2D" << endl;
    }

    // 4. getPoint
    void getPoint()
    {
        cout << "(" << xCo << "," << yCo << ")" << endl;
    }

    // 5. setPoint
    void setPoint(int xCo, int yCo)
    {
        this->xCo = xCo;
        this->yCo = yCo;
    }

    // 6. Inside circle
    bool insideCircle(int r, Point2D cen)
    {

        int d1 = pow((xCo - cen.xCo), 2);
        int d2 = pow((yCo - cen.yCo), 2);

        int root = sqrt((d1 + d2));
        if (root < r)
            return true;
        return false;
    }

    // 7. Check colinear
    bool checkCollinear(Point2D p1, Point2D p2)
    {

        double x1 = (double)(yCo - p1.yCo) / (xCo - p1.xCo);
        double x2 = (double)(yCo - p2.yCo) / (xCo - p2.xCo);
        double x3 = (double)(p1.yCo - p2.yCo) / (p1.xCo - p2.xCo);

        if (x1 == x2 && x2 == x3)
            return 1;
        return 0;
    }

    // 8. Check Axis
    bool onAxis()
    {
        if (xCo == 0 || yCo == 0)
            return 1;
        return 0;
    }
};

int main()
{

    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    Point2D p1(x, y), p2, p3, p4;

    int flag = 1, input, r;
    while (flag)
    {

        cout << endl
             << "1. Get Point" << endl;
        cout << "2. Set Point" << endl;
        cout << "3. Check for Inside circle" << endl;
        cout << "4. Check for colinear" << endl;
        cout << "5. Check for Axis" << endl;
        cout << "6. Exit" << endl
             << endl;
        cout << "Enter choice: ";
        cin >> input;

        switch (input)
        {

        case 1:

            p1.getPoint();
            break;

        case 2:

            cout << "Enter x coordinate: ";
            cin >> x;
            cout << "Enter y coordinate: ";
            cin >> y;
            p1.setPoint(x, y);

            break;

        case 3:

            cout << "Enter x coordinate: ";
            cin >> x;
            cout << "Enter y coordinate: ";
            cin >> y;
            p2.setPoint(x, y);

            cout << "Enter radius: ";
            cin >> r;

            if (p1.insideCircle(r, p2))
                cout << "Point is Inside circle" << endl;
            else
                cout << "Point is outside circle" << endl;

            break;

        case 4:

            cout << "Enter x coordinate for 1st point: ";
            cin >> x;
            cout << "Enter y coordinate for 1st point: ";
            cin >> y;
            p3.setPoint(x, y);

            cout << "Enter x coordinate for 2nd point: ";
            cin >> x;
            cout << "Enter y coordinate for 2nd point: ";
            cin >> y;
            p4.setPoint(x, y);

            if (p1.checkCollinear(p3, p4))
                cout << "Points are colliner" << endl;
            else
                cout << "Points are not colliner" << endl;

            break;

        case 5:

            if (p1.onAxis())
                cout << "Point is on Axis" << endl;
            else
                cout << "Point is not on Axis" << endl;

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