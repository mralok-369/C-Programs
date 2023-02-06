//Sum of 1 to n natural number function
#include<stdio.h>
#include<conio.h>
void main()
{
    int addn(int);
    int n,ans;
    printf("Enter value n : ");
    scanf("%d",&n);
    ans=addn(n);
    printf("Answer=%d",ans);
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
