// program to print word in increasing and decreasing order
#include<stdio.h>
void main()
{
    int c,d;
    char string[]="CProgramming";
    printf("\n");
    printf("------------------\n");
    for(c=0; c<=11; c++)
    {
        d=c+1;
        printf("%*.1s|\n",d,string);
    }
    for(c=11; c>=0; c--)
    {
        d=c+1;
        printf("%*.1s|\n",d,string);
    }
    printf("-------------------\n");
}

