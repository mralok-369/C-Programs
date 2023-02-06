// read a line of text from terminal
#include<stdio.h>
void main()
{
    char line[81],character;
    int c;
    c=0;
    printf("Enter text press <return> at end\n");
    do
    {
        character=getchar();
        line[c]=character;
        c++;
    }
    while(character!='\n');
    c=c-1;
    line[c]='\0';
    printf("\n%s\n",line);
}
