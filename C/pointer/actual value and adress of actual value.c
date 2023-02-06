// show actual value and address of actual value
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=23;
    int *p;
    p=&a;
    printf("Address of a : %u",&a);
    printf("\nAddress of p : %u",p);
    printf("\nValue of a : %d",a);
    printf("\nValue of *p : %u",*p);
    getch();
}
