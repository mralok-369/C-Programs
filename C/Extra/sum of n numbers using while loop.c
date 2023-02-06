// sum of n numbers using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    long int n,s=0;
    printf("n::");
    scanf("%ld",&n);
    while(n>0)
    {
        s=n+s;
        n--;
    }
    printf("Sum::%ld",s);
    getch();
}
