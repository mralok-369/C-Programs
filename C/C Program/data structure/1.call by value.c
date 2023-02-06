#include<stdio.h>
void swap(int , int);
int main()
{
    int a=20;
    int b = 10;
    printf("Before swapping: a = %d, b= %d\n",a,b);
    swap(a,b);

    return 0;

}
void swap(int a, int b)
{
    int temp;
    temp =a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b= %d",a,b);

}
