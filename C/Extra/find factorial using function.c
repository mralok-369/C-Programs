// find factorial using function
#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int ans,n;
    printf("enter the value of n : \n");
    scanf("%d",&n);
    ans=fact(n);
    printf("\n your factorial is %d",ans);
    getch();
}

int fact(int n)
{
    int facto=1;
    if(n==1)
        return facto;
    else
    {
        facto=n*fact(n-1);
        return (facto);
    }
}
