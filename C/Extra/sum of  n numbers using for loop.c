// sum of n natural numbers using for loop
#include<stdio.h>
main()
{
    int n,i;
    int sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum of the series : ");
    for(i=1; i<=n; i++)
    {
        if(i!=n)
            printf("%d + ",i);
        else
            printf("%d = %d ",i,sum);
    }
}
