// print pattern in reverse order of number with one decreasing
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=10; i>=1; i--)
    {
        for(j=10; j>=i; j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    getch();
}

