#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[20],str2[20],*p1,*p2;
    int i,flag=0;
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    p1=&str1;
    p2=&str2;
    while(*p1!='\0' || *p2!='\0')
    {
        if(*p1==*p2)
        {
            ++p1;
            ++p2;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(*p1=='\0' && *p2=='\0' && flag==0)
        printf("string are same");
    else
        printf("string are not same");
}
