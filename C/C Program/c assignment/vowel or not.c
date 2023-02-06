// check the character is vowel or not
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any character: \n");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    {
        printf("\n Character is a vowel");
    }
    else
    {
        printf("\n Character is not a Vowel");
    }
    getch();
    return 0;
}
