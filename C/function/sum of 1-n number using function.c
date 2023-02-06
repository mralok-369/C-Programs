// sum of 1-n number using function
#include<stdio.h>
#include<conio.h>
int addn(int);
void main()
{
    int n,ans;
    printf("Enter value of n: ");
    scanf("%d",&n);
    ans=addn(n);
    printf("\n Sum of %d number = %d",n,ans);
    getch();
}
int addn(int m)
{
    int total=0,i;
    for(i=1; i<=m; i++)
    {
        total+=i;
    }
    return total;
}
