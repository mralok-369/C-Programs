// program to print a-z and A-Z in decimal and character form
#include<stdio.h>
void main()
{
    char c;
    printf("\n\n");
    for(c=65; c<=122; c++)
    {
        if(c>90 && c<97)
            continue;
        printf("|%4d - %c ",c,c);
    }
    printf("|\n");
}
