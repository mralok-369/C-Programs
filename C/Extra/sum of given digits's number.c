// find sum of given digit's number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    printf("n::");
    scanf("%d",&n);
    while(n>0)
    {
        s=n%10;
        sum=sum+s;
        n=n/10;
    }
    printf("sum:%d",sum);
    getch();
}
