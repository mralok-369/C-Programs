// simple string program
#include<stdio.h>
#include<conio.h>
void main()
{
    char s[10];
    printf("Enter your name : ");
    gets(s);
    //scanf("%s",s);
    //char s[10]={'a','l','o','k','\0'};
    /*int i;
    for(i=0; s[i]!='\0'; i++)
        printf("%c",s[i]);*/
       // printf("%s",s);
       puts(s);
    getch();
}
