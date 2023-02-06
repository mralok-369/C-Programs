// function with argument and return type
#include<stdio.h>
int main()
{
    int x,res;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    res=my_function(x);
    printf("Returned value: %d",res);
}
int my_function(int x)
{
    printf("this will take an argument,and will return its squared value\n");
    return x*x;
}
