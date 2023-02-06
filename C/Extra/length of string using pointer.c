// length of string using pointer
#include<stdio.h>
void main()
{
    char str1[20],*p1;
    int i,len=0;
    printf("Enter string: ");
    scanf("%s",&str1);
    p1=&str1;
    while(*p1!='\0');
    {
        p1++;
        len++;
    }
    printf("Lenght of string : %d",len);
}
