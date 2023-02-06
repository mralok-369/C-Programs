// find factorial of number
#include<stdio.h>
#include<conio.h>
void main()
{
    long int a,m=1;
    printf("enter any number : ");
    scanf("%ld",&a);
    while(a>0)
    {
        m=a*m;
        a--;
    }
    printf("Factorial = %ld",m);
    getch();
}
