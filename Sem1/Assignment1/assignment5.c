// Program to Calculate Standard Deviation, Mean and Variance

#include <stdio.h>
#include <math.h>

int main()
{
    // Initialization
    int n1 = 600, n2 = 470, n3 = 170, n4 = 430, n5 = 300;

    // Find mean
    float mean = (float)(n1 + n2 + n3 + n4 + n5) / 5;

    // Find variance
    float v1 = pow((n1 - mean), 2);
    float v2 = pow((n2 - mean), 2);
    float v3 = pow((n3 - mean), 2);
    float v4 = pow((n4 - mean), 2);
    float v5 = pow((n5 - mean), 2);
    float variance = (v1 + v2 + v3 + v4 + v5) / 5;

    // Find Standard deviation
    float standard_deviation = sqrt(variance);

    // Output
    printf("Mean: %0.2f\nVariance: %0.2f\nStandard Deviation %0.2f", mean, variance, standard_deviation);

    return 0;
}


// Mean is average of a given set of data
// Variance is the average of squares of differences between all numbers and mean
// Standard Deviation is square root of variance
