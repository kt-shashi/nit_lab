// Assignment 6
// Question 1
// 2021pgcaca050

#include <iostream>

using namespace std;

#define PI 3.14

class Point
{
protected:
    int xCo;
    int yCo;

public:
    Point()
    {
        xCo = yCo = 0;
    }
    Point(int xCo, int yCo)
    {
        this->xCo = xCo;
        this->yCo = yCo;
    }
    ~Point()
    {
        cout << "Destructor called for Point" << endl;
    }
};

class Circle : public Point
{
protected:
    float radius;

public:
    Circle()
    {
        radius = 0;
    }
    Circle(float r, int xCo, int yCo) : Point(xCo, yCo)
    {
        radius = r;
    }
    void print()
    {
        cout << "X coordinate: " << xCo << endl;
        cout << "Y coordinate: " << yCo << endl;
        cout << "Radius: " << radius << endl;
    }
    float area()
    {
        return PI * radius * radius;
    }
    ~Circle()
    {
        cout << "Destructor called for Circle" << endl;
    }
};

class Cylinder : public Circle
{
protected:
    float height;

public:
    Cylinder()
    {
        height = 0;
    }
    Cylinder(float h, int r, int xCo, int yCo) : Circle(r, xCo, yCo)
    {
        height = h;
    }
    void print()
    {
        cout << "X coordinate: " << xCo << endl;
        cout << "Y coordinate: " << yCo << endl;
        cout << "Radius: " << radius << endl;
        cout << "Height: " << height << endl;
    }
    float surarea()
    {
        float area = (2 * PI * radius * height) + (2 * PI * radius * radius);
        return area;
    }
    float volume()
    {
        return PI * radius * radius * height;
    }
};

int main()
{

    int xCo, yCo, h, r;

    cout << "Enter x coordinate: ";
    cin >> xCo;
    cout << "Enter y coordinate: ";
    cin >> yCo;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    cout << endl;
    Cylinder c(h, r, xCo, yCo);
    c.print();
    cout << "Surface area: " << c.surarea() << endl;
    cout << "Volume: " << c.volume() << endl;
}