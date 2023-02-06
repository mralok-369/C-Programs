#include<stdio.h>
#include<conio.h>
void copy(char*, char*);
void main(){
    char a[100];
    gets(a);
    char *p;
    copy(p,a);
    printf("copy string : %s",p);
    getch();
}
void copy(char*x,char*y)
{
    int i;
    for(i=0; y[i]!='\0'; i++)
    {
        x[i]=y[i];
    }
    x[i]='\0';
}
