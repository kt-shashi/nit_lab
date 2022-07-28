#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c, d, x1, x2;
    printf("For roots in quadratic equation ax^2 + bx + c = 0\n");
    printf("Enter the value of a,b,c : \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Roots of the quadratic equation %0.lfx^2+%0.lfx+%0.lf=0\n", a, b, c);
    d = b * b - 4 * a * c;

    if (d > 0) //both roots are real.
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("\tx = %.2lf , %.2lf", x1, x2);
    }
    if (d == 0) //both roots are equal.
    {
        x1 = x1 = -b / (2 * a);
        printf("\tx = %.0lf", x1);
    }
    if (d < 0) //both roots are imagnary & complex.
    {
        d = -d;
        printf("   x = (-%.0lf+%.1lfi)/%.0lf", b, sqrt(d), (2 * a));
        printf(", (-%.0lf-%.1lfi)/%.0lf", b, sqrt(d), (2 * a));
    }
}
