// to compute area and perimeter
#include <stdio.h>
#include <math.h>
// find perimeter
double perimeter(double a, double b, double c)
{
    return a + b + c;
}
// find area
double area(double a, double b, double c)
{
    double s = 0.5 * (a + b + c);
    return sqrt ( s * (s - a) * (s - b) * (s - c) );
}
int main()
{
    double a, b, c;
    int choice;
    // User input
    printf("Enter sides of a triangle\n");
    printf("Enter side 1: ");
    scanf("%lf", &a);
    printf("Enter side 2: ");
    scanf("%lf", &b);
    printf("Enter side c: ");
    scanf("%lf", &c);
    printf("\nMenu\n");
    printf("1. Find perimeter of the triangle\n");
    printf("2. Find area of the triangle\n");
    printf("Enetr choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
	    case 1:		printf("Perimeter =  %.2lf units", perimeter(a, b, c));	break;
	    case 2:		printf("Area =  %.2lf square units", area(a, b, c));	break;
   		default:	printf("Invalid choice");
    }
    return 0;
}
