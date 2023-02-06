// Pass by value in pointer example
#include<stdio.h>
#include<conio.h>
void sqr(int);
int main()
{
    int a;
    printf("Enter an Integer : ");
    scanf("%d",&a);
    printf("\n  a=%d",a);
    sqr(a);
    getch();
    return 0;
}
void sqr(int x)
{
    x=x*x;
    printf("\n x=%d",x);
}
