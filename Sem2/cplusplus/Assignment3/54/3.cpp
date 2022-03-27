// Name: SHUBHANSHU SINGH
// Reg.No : 2021PGCACA054
// Assignment : 03
// Question : 03

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Point2D
{

private:
    int xCo;
    int yCo;

public:
    Point2D()
    // default constructor
    {
        xCo = yCo = 0;
    }

    Point2D(int xCo, int yCo)
    // parameterized constructor
    {
        this->xCo = xCo;
        this->yCo = yCo;
    }

    ~Point2D()
    // destructor
    {
        cout << "Object destroyed for class Point2D \n";
    }

    void getPoint()
    // display point
    {
        cout << "Point : (" << xCo << "," << yCo << ") \n";
    }

    void setPoint(int xCo, int yCo)
    // setPoint
    {
        this->xCo = xCo;
        this->yCo = yCo;
    }

    bool insideCircle(int r, Point2D cen)
    // inside circle
    {

        int d1 = pow((xCo - cen.xCo), 2);
        int d2 = pow((yCo - cen.yCo), 2);

        int root = sqrt((d1 + d2));
        if (root < r)
            return true;
        return false;
    }

    bool checkCollinear(Point2D p1, Point2D p2)
    // for colliner
    {

        double x1 = (double)(yCo - p1.yCo) / (xCo - p1.xCo);
        double x2 = (double)(yCo - p2.yCo) / (xCo - p2.xCo);
        double x3 = (double)(p1.yCo - p2.yCo) / (p1.xCo - p2.xCo);

        if (x1 == x2 && x2 == x3)
            return 1;
        return 0;
    }

    bool onAxis()
    // check on axis
    {
        if (xCo == 0 || yCo == 0)
            return 1;

        return 0;
    }
};

int main()
{

    cout << "---------------------------\n";
    int x, y;
    cout << "Enter X-coordinate : ";
    cin >> x;
    cout << "Enter Y-coordinate : ";
    cin >> y;
    cout << "---------------------------\n";

    Point2D p1(x, y), p2, p3, p4;

    int choice = 1, r;
    while (choice != 6)
    {
        cout << "\tChoose one option \n";
        cout << "--------------------------\n";
        cout << "1 - Get Point \n";
        cout << "2 - Set Point \n";
        cout << "3 - Check for Inside circle \n";
        cout << "4 - Check for colinear \n";
        cout << "5 - Check for Axis \n";
        cout << "6 - Exit \n";
        cout << "--------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            p1.getPoint();
            break;

        case 2:
            cout << "Enter X-coordinate : ";
            cin >> x;
            cout << "Enter Y-coordinate : ";
            cin >> y;
            p1.setPoint(x, y);
            break;

        case 3:
            cout << "Enter X-coordinate : ";
            cin >> x;
            cout << "Enter Y-coordinate : ";
            cin >> y;
            p2.setPoint(x, y);

            cout << "Enter radius of the circle : ";
            cin >> r;

            if (p1.insideCircle(r, p2))
                cout << "Point is Inside circle \n";
            else
                cout << "Point is outside circle \n";
            break;

        case 4:

            cout << "Enter X-Coordinate for 1st point: ";
            cin >> x;
            cout << "Enter Y-Coordinate for 1st point: ";
            cin >> y;
            p3.setPoint(x, y);

            cout << "Enter X-Coordinate for 2nd point: ";
            cin >> x;
            cout << "Enter Y-Coordinate for 2nd point: ";
            cin >> y;
            p4.setPoint(x, y);

            if (p1.checkCollinear(p3, p4))
                cout << "Points are colliner \n";
            else
                cout << "Points are not colliner \n";

            break;

        case 5:

            if (p1.onAxis())
                cout << "Point is on Axis \n";
            else
                cout << "Point is not on Axis \n";
            break;

        case 6:
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