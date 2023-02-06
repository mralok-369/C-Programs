// find factorial using function
int fact(int);
#include<stdio.h>
#include<conio.h>
void main()
{
    int ans,n;
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    ans = fact(n);
    printf("\n Factorial is : %d",ans);
    getch();
}
int fact(int n)
{
    int factorial=1;
    if(n==1)
        return factorial;
    else
    {
        factorial = n*fact(n-1);
        return(factorial);
    }
}
