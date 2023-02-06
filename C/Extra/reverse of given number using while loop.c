// reverse of a given nuber whing while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rev=0,s;
    printf("Enter number : \n");
    scanf("%d",&n);
    while(n>0)
    {
        s=n%10;
        rev=rev*10+s;
        n=n/10;
    }
    printf("rev : %d",rev);
    getch();
}
