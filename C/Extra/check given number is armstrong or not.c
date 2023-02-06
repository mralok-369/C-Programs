// check given number is armstrong or not using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s,sum=0,temp;
    printf("Enter number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        s=n%10;
        sum=sum+(s*s*s);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("\nNumber is Armstrong");
    }
    else
    {
        printf("\nNumber is Armstrong");
    }
    getch();
}
