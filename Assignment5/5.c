// program to create a spiral matrix from a given array
#include <stdio.h>
int main()
{
    int a[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}},
        c = 4, r = 3, left = 0, right = c - 1, top = 0, bottom = r - 1, i;
    // Spiral print
    while (left <= right && top <= bottom)
    {
        // top row
        for ( i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;
        // right column
        for ( i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;
        // botton row
        if (top <= bottom)
        {
            for ( i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }
        // left column
        if (left <= right)
        {
            for ( i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
}
