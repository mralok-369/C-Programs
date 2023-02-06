//  sum of 1 to n number using function
#include<stdio.h>
#include<conio.h>
int addn(int); // function declaration

void main()
{
    int n, ans;
    printf("Enter thye value of numbers: ");
    scanf("%d",&n);
    ans=addn(n);   // function call
    printf("Answer = %d",ans);
    getch();
}
//function defination
int addn(int m)
{
    int total=0,i;
    for(i=1; i<=m; i++)
    {
        total+=i;
    }
    return total;
}
