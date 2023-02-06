// copy string using pointer
#include<stdio.h>
#include<conio.h>
void copy(char*,char*); // function prototype
// main function body
void main()
{
    char a[10]="Maulik";
    char *p;
    copy(p,a);
    printf("copy string: = %s",p);
    getch();
}
// defination of copy function
void copy(char*x,char*y)
{
    int i;
    for(i=0; y[i]!='\0'; i++)
    {
        x[i]=y[i];
    }
    x[i]='\0';
}
