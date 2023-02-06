/* Sum of n numbers by using recursion*/
#include<stdio.h>
int getsum(int); // function declaration
int main()
{
    int n,sum;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    sum=getsum(n);  // function calling and pu the return value in sum
    printf("Sum of n numbers =%d",sum);
    return 0;
}
// function defination
int getsum(n)
{
    static int sum=0;
    if(n>0)
    {
        sum+=n;
        getsum(n-1); // recursion (function call itself)
    }
    return sum; // function return a value
}
