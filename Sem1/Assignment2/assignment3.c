// Program to convert a given time (in second) to time (in hour, minutes and seconds)

#include <stdio.h>

int main()
{

    // User input
    int t; // Declaration
    printf("Enter time (in seconds): \n");
    scanf("%d", &t);

    // Convertion to time (in hour, minutes and seconds)
    int sec = t % 60;
    int min = t / 60;
    int hour = 0;
    if (min > 60)
    {
        hour = min / 60;
        min = min % 60;
    }

    // Output
    printf("%d hours, ", hour);
    printf("%d minutes, ", min);
    printf("%d seconds\n", sec);

    return 0;
}