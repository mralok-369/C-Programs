// check weather the given character is vowel or not using switch case
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("\n %c is a Vowel",ch);
        break;
    default:
        printf("\n %c is not a Vowel",ch);
        break;
    }
    getch();
    return 0;

}
