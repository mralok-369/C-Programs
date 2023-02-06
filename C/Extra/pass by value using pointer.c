// pass by value in pointer example
#include<stdio.h>
#include<conio.h>
void square(int);
int main()
{
    int a=20;
    square(a);
    printf("\n a= %d",a);
    getch();
    return 0;
}

void square(int x)
{
    x=x*x;
    printf("\n x = %d",x);
}
