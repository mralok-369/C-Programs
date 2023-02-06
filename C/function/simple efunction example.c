// simple function example
void printline();
#include<stdio.h>
#include<conio.h>
void main()
{
    printline();
    printf("\nIt is The Programming\n");
    printline();
    getch();
}
void printline(void)
{
    int i;
    for(i=1; i<23; i++)
    {
        printf("-");
    }
}
