// Assignment 7
// Question 1
// 2021pgcaca050

#include <iostream>
#define PI 3.14

using namespace std;

class Shape2D
{
protected:
    string type;

public:
    double area() = 0;
    double perimeter() = 0;
};

class Circle : protected Shape2D
{
protected:
    double center;
    double radius;

public:
    double area()
    {
        return PI * radius * radius;
    }

    double perimeter()
    {
        return PI * 2 * radius;
    }

    void print()
    {
        cout << "Radius: " << r << endl;
    }
};

class Triangle : protected Shape2D
{
protected:
    double base;
    double height;

public:
    double area()
    {
    }

    double perimeter()
    {
    }

    void print()
    {
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

int main()
{
    return 0;
}