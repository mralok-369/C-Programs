// sum of 1-n number using recursion
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sum=getsum(n);
    printf("\nsum of %d numbers = %d",n,sum);
    return 0;
}
int getsum(int n){
    static int sum=0;
    if(n>0){
        sum+=n;
        getsum(n-1);
    }
    return sum;
}
