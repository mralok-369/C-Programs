// call by value
#include<stdio.h>
#include<conio.h>
void cube(int);
int main()
{
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    cube(a);
    printf("\n a = %d",a);
    getch();
    return 0;
}
void cube(int x)
{
    x=x*x*x;
    printf("\n Cube = %d",x);
}
