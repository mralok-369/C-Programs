// print pattern using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    i=9;
    while(i>=1)
    {
        j=i;
        while(j>=1)
        {
            printf(" %d",j);
            j--;
        }
        i--;
        printf("\n");
    }
    getch();
}
