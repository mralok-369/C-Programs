// printing pattern 18
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    getch();
}
