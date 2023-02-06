//Sum of the first and last digit of the given number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    sum=n%10;
    while(n>0)
    {
        s=n%10;
        n=n/10;
    }
    sum=sum+s;
    printf("sum: %d",sum);
    getch();
}
