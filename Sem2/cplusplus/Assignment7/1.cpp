// Assignment 7
// Question 1
// 2021pgcaca050

#include <bits/stdc++.h>
#define PI 3.14

using namespace std;

class Shape2D
{
protected:
    string type;

public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Point{
private:
    int x;
    int y;
public:
    Point(){};

    void setPoints(int x, int y){
        this->x=x;
        this->y=y;
    }

    void printPoints(){
        cout<<"Center coordinates: ("<<x<<","<<y<<")"<<endl;
    }
};

class Circle : protected Shape2D
{
protected:
    Point p;
    double radius;

public:
    Circle(){}
    Circle(int x,int y,int r, string t){
        p.setPoints(x,y);
        radius=r;
        type=t;
    }
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
        cout<<"Display Circle-- "<<endl;
        cout<<"Type: "<<type<<endl;
        p.printPoints();
        cout << "Radius: " << radius << endl;
    }
};

class Triangle : protected Shape2D
{
protected:
    double base;
    double height;

public:
    Triangle(){}

    Triangle(int b,int h,string t){
        base=b;
        height=h;
        type=t;
    }

    double area()
    {
        return 0.5 * base * height;
    }

    double perimeter()
    {
        double h=sqrt( pow(base,2) + pow(height,2) );
        return h+base+height;
    }

    void print()
    {
        cout<<"Display Triangle-- "<<endl;
        cout<<"Type: "<<type<<endl;
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

int main()
{

    int x,y,r;

    cout<<"For center of circle"<<endl;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter x coordinate: ";
    cin>>y;
    cout<<"Enter radius: ";
    cin>>r;

    Circle c1(x,y,r,"circle");

    cout<<endl;
    c1.print();
    cout<<"Area of circle: "<<c1.area()<<endl;
    cout<<"Perimeter of circle: "<<c1.perimeter()<<endl<<endl;

    int b,h;
    cout<<endl<<"For triangle: "<<endl;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter height: ";
    cin>>h;

    Triangle t1(b,h,"triangle");
    cout<<endl;
    t1.print();
    cout<<"Area of triangle: "<<t1.area()<<endl;
    cout<<"Perimeter of triangle: "<<t1.perimeter()<<endl<<endl;

    return 0;
}
