//Finf input is number character(Lower or Upper) or other symbol
#include<stdio.h>
void main()
{
    char n;
    printf("Enter a character:");
    scanf("%c",&n);
    if(n>=48&&n<=57)//ASCII value of 0-9 is 48-57
    {
        printf("number");
    }
    else if(n>=65&&n<=90)//ASCII value of A-Z is 63-90
    {
        printf("upercase");
    }
    else if(n>=97&&n<=122)//ASCII value of a-z is 97-122
    {
        printf("lowercase");
    }
    else
    {
        printf("other symbol");
    }
}

