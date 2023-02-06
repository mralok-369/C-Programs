// find a any type of character
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char c;
    printf("Enter any cahracter:>>\n");
    scanf("%c",&c);
    if(isupper(c))
        printf("It is UPPERCASE char......!");
    else if(islower(c))
        printf("It is LOWERCASE char......!");
    else if(isdigit(c))
        printf("It is DIGICASE char.....!");
    else
        printf("It is SPECIAL: char.....!");
    getch();
}
