// function with argument with return type
int soo(int);
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ans;
    printf("\nEnter the value of N: ");
    scanf("%d",&n);
    ans=soo(n);
    printf("\nAns is : %d",ans);
    getch();
}
int soo(int i){
    int j,k=0;
    for(j=1; j<=i; j++)
    {
        k=j*j;
    }
    return k;
}
