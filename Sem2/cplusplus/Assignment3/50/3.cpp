#include <iostream>

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
    }

    // 7. Check colinear
    bool checkCollinear(Point2D, Point2D)
    {
    }

    // 8. Check Axis
    bool onAxis()
    {
    }
};

int main()
{

    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    Point2D p1(x, y);

    int flag = 1, input;
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

            break;

        case 4:

            break;

        case 5:

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