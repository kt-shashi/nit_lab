    #include <stdio.h>
    #include <string.h>
    void main()
    {
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
        printf("How many places name are there : ");
        scanf("%d", &n);
        printf("Enter %d places name : \n", n);
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
        for (i = 0; i < n - 1 ; i++)
            for (j = i + 1; j < n; j++)
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
        printf("\nSorted names: \n"); 
        for (i = 0; i < n; i++) 
            printf("%s\n", name[i]);
    }
