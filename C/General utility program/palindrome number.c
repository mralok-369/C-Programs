#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter a string to check if it is palindrome or not: ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("String is palindrome\n");
    }
    else
        printf("String is not palindrome\n");
    return 0;
}
