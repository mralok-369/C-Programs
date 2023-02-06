//show address of variable using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=12;
    float b=24.25;
    char c='a';
    printf("\n Address of a : %u",&a);
    printf("\n Address of b : %u",&b);
    printf("\n Address of c : %u",&c);
    getch();
}
