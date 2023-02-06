// print pattern 14
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=9; i++)
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=i; j<=9; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
}
