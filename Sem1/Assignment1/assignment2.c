// Program to find simple interest

#include <stdio.h>

int main()
{
    // Initialization
    float p=5000, r=10.5, t=3;

    // Calculating Simple Interest
    float si = (p * t * r) / 100;

    // Output
    printf("Simple Interest: Rs. %0.2f", si);

    return 0;
}

