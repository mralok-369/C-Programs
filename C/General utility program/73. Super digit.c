#include<stdio.h>
void main()
{
    long int n;
    long int x,s;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>=10)
    {
        x=n;
        s=0;
        while(x>0)
        {
            s=s+(x%10);
            x=x/10;
        }
        n=s;
    }
    printf("\nSuper digit of the given number is %ld",n);
}
