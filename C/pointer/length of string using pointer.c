#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[20],*p1;
    int i,len=0;
    printf("Enter string : ");
    gets(str1);
    p1=&str1;
    while(*p1!='\0')
    {
        p1++;
        len++;
    }
    printf("lenght of string : %d",len);
}
