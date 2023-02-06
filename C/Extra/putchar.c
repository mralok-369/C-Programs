#include<stdio.h>
#include<conio.h>
void main()
{
    char a,b;
    printf("\nEnter one lowercase character\n");
    a=getchar();
    printf("Lowercase character is ==>");
    putchar(a);
    printf("\n\ncharacter in uppercase ==>");
    putchar(a-32);
    getch();
}
