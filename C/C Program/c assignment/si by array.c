#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef int integer;

void main()

{

    printf("\n\nEnter PRINCIPLE amt. to calculate the SI = ");
    int p, y, r;
    scanf("%d", &p);

    printf(" \nEnter the no. of YEARS = ");
    scanf("%d", &y);

    int s[y + 1][4 + 1];

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            s[i + 1][j] = (p * (i + 1) * (j + 6)) / 100;
            // printf("\n s[%d][%d] = (%d*%d*%d) /100  \n",i+1,j,p,i+1,j=6);
        }
    }

    printf("\nYear\t6%\t7%\t8%\t9%\t10%\n");

    printf("\n");

    for (int i = 0; i < y; i++)
    {
        printf("%d", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("\t%d", s[i + 1][j]);
        }
        printf("\n");
    }

    printf("\n");

    getch();
}
