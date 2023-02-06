// check weather the given character is vowel or not
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter an Alphabets : ");
    scanf("%c",&ch);

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    {
        printf("\nAlphabets is Vowel");
    }
    else
    {
        printf("\nAlphabets is not Vowel");
    }
    getch();
    return 0;
}
