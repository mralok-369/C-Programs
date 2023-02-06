// simple program of function
void printline();
#include<stdio.h>
#include<conio.h>
void main()
{
    printline();
    printf("\n It is the Programming \n");
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
