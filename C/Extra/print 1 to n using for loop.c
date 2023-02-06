// print 1 to N natural numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\n%d",i);
    }
    getch();
}
