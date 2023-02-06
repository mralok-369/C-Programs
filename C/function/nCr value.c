// find nCr value using recursive function
#include<stdio.h>
int fact(int);
int main()
{
    int n,r,ncr;
    printf("Enter any two numbers : ");
    scanf("%d%d",&n,&r);
    ncr = fact(n)/(fact(r)*fact(n-r));
    printf("\n nCr of %d and %d = %d",n,r,ncr);
    return 0;
}
int fact(int n)
{
    int i=0;
    while(n!=0)
    {
        i=i*n;
        n--;
    }
    return i;
}
