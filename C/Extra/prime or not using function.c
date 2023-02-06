// find number is prime or not using function
#include<stdio.h>
#include<conio.h>
int pri(int); // fun prototype
void main()
{
    int n,s;
    printf("enter the value of n: ");
    scanf("%d",&n);
    if(pri(n)==1)
    {
        printf("\n%d is prime",n);
    }
    else
    {
        printf("\n%d is not prime",n);
    }
    getch();
}
int pri(int m
        )
{
    int i;
    for(i=1;i<=m-1;i++)
    {
        if(m%i==0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
}
