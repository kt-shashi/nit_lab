// Program in C to find Total, Average, and Percentage of Five Subjects

#include <stdio.h>

int main()
{
    // Declaration
    float s1, s2, s3, s4, s5;

    // User Input
    printf("Enter marks in subject 1: ");
    scanf("%f", &s1);
    printf("Enter marks in subject 2: ");
    scanf("%f", &s2);
    printf("Enter marks in subject 3: ");
    scanf("%f", &s3);
    printf("Enter marks in subject 4: ");
    scanf("%f", &s4);
    printf("Enter marks in subject 5: ");
    scanf("%f", &s5);

    // Calculation
    float total = s1 + s2 + s3 + s4 + s5;
    float average = total / 5;
    float percentage = ((s1 + s2 + s3 + s4 + s5) / 500) * 100;

    // Output
    printf("Total: %0.2f\nAverage: %0.2f\nPercentage: %0.2f%%", total, average, percentage);

    return 0;
}
