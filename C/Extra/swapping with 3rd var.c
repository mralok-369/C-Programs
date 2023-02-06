#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("\nBefore Swapping\n");
    printf("a::%d and b::%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping\n");
    printf("a::%d and b::%d",a,b);
    getch();
}
