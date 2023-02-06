// pattern using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    i=9;
    while(i>=1)
    {
        j=i;
        while(j<=9)
        {
            printf(" %d",i);
            j++;
        }
        printf("\n");
        i--;
    }
    getch();
}
