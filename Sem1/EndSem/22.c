#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int i, count = 0, flag = 0;
    printf("enter a line : ");
    gets(a);
    int h = strlen(a);
    for (i = 0; i < h; i++)
        if ((a[i] == 'p' || a[i] == 'P') && (a[i + 1] == 'o' 
			|| a[i + 1] == 'O') && (a[i + 2] == 's' 
			|| a[i + 2] == 'S') && (a[i + 3] == 't' || a[i + 3] == 'T'))
        {
            a[i] = ' ';
            a[i + 1] = 'D';
            a[i + 2] = 'A';
            a[i + 3] = 'K';
        }
    printf("The new string is %s", a);
    return 0;
}
