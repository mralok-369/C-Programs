// function with argument with return type
int sos(int);
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ans;
    printf("\n Enter the value of N : ");
    scanf("%d",&n);
    ans=sos(n);
    printf("\n The sqr is : %d",ans);
    getch();
}
int sos(int i)
{
    int j=1,k=0;
    for(j=1; j<=i; j++)
    {
        k=j*j;
    }
    return k;
}
