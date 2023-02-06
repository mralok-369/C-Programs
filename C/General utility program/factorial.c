#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter a number to calculate ist's factorial : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("\nFactorial of %d = %d",n,fact);
    getch();
}
