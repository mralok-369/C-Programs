#include<stdio.h>
#include<conio.h>
void main()
{
    int i,p,r,n;
    printf("Enter the Principal:\n");
    scanf("%d",&p);
    printf("Rate:");
    scanf("%d",&r);
    printf("\ntime:");
    scanf("%d",&n);
    i=(p*r*n)/100;
    printf("\nTotal Intrest = %d",i);
    printf("\nTotal Amount = %d",p+i);
    getch();
}
