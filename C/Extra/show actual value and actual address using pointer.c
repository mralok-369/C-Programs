// show actual value and actual address using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=23;
    int *p;
    p=&a;
    printf("Address of a : %u",&a);
    printf("\nAddress of p : %u",p);
    printf("\nvalue of a : %d",a);
    printf("\nvalue of *p : %u",*p);
    getch();
}
