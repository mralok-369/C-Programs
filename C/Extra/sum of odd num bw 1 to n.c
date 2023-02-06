// find sum of odd number of n numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("1+3+5+7+.....+n Enter N: \n");
    scanf("%d",&n);
    for(i=1; i<=n; i+=2)
    {
        sum+=i;
    }
    printf("sum = %d",sum);
    getch();
}
