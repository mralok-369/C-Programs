// function calling demo
#include<stdio.h>
void CSE();
void IT();

void main()
{
    printf("Hey from main function\n");
    CSE();
    printf("bye from main function\n");
}
void CSE()
{
    printf("Hey from function CSE\n");
    IT();
    printf("Bye from function CSE\n");
}
void IT()
{
    printf("Hey from function IT\n");
    printf("Bye from function IT\n");
}
