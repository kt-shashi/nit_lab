#include <stdio.h>
void main()
{
    int n, sum = 0, max = 0, c = 0, i;
    float avg;
    printf("Input the number of student in the class: \n");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Inpute marks of %d student: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
        if (max < a[i])
            max = a[i];
    }
    avg = (float)sum / n;

    for (i = 0; i < n; i++)
    {
        if (avg < a[i])
            c++;
    }
    printf("Maximum score : %d\nAverage score : %.2f\nNumber of students score more than average score : %d", max, avg, c);
}
