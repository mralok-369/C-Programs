// prefix and postfix decrement (--) operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b;

    b=--a;
    printf("\n after prefix decrement : ");
    printf("a = %d and b = %d",a,b);

    a=10;
    b=a--;
    printf("\n after postfix decrement : ");
    printf("a = %d and b = %d",a,b);

    getch();
    return 0;

}
