#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,r;
    printf("Enter the total number of days:\n");
    scanf("%d",&a);
    b=a/30;
    printf("month::%d\n",b);
    r=a%30;
    printf("Remaing Days :: %d",r);
    getch();

}
