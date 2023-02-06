// printing pattern 13
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=9; i>=1; i--)
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=i; j<=9; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}
