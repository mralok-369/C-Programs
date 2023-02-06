// call by value example in function
#include<stdio.h>
void cube(int); // function declaration

int main()
{
    int a=2;
    cube(a);
    printf("\n a= %d",a);
    return 0;
    getch();
}
// function defination
void cube(int x)
{
    x=x*x*x;
    printf("\n x=%d",x);
}
