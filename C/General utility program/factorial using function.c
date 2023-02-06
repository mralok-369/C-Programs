// factorial using function
#include<stdio.h>
long factorial(int);
main()
{
    int n;
    long fact=1;
    printf("Enter a number to calculate it's factorial : ");
    scanf("%d",&n);
    printf("\n\n%d! = %ld\n",n,factorial(n));
    return 0;
}
long factorial(int num)
{
    int i;
    long result = 1;
    for(i=1; i<=num; i++)
        result*=i;
    return(result);
}
