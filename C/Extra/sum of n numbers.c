// Finf sum of n numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    long int n,s=0;
    printf("Enter number of N : ");
    scanf("%ld",&n);
    while(n>0)
    {
        s=n+s;
        n--;
    }
    printf(" sum = %ld",s);
    getch();
}
