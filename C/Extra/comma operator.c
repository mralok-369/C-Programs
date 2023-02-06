#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m;
    printf("Program to comma operator\n\n");
    printf("Enter the value of n\n");
    scanf("%d",&n);
    m=(n,n+5);
    printf("\nAfter use of comma operator value is %d",m);
    getch();

}
