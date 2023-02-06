// pass by or call by
#include<stdio.h>
#include<conio.h>
void fun(int a,int *b)
{
    a+=2;
    *b+=2;
    printf("A is %d\n",a);
    printf("B is %d\n",*b);
}
void main()
{
    int x=10;
    int y=20;
    fun(x,&y);
    printf("X is %d \n",x);
    printf("Y is %d \n",y);
}
