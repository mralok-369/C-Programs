#include<stdio.h>
#include<conio.h>
void main()
{
    char a,b;
    printf("Enter one character\n");
    scanf("%c",&a);
    printf("Input character is ==> %c\n",a);
    fflush(stdin);  //to clear input buffer
    printf("\n\n\nenter the second character\n");
    b=getchar();
    printf("\nASCII value of character(%c)is=> %d",b,b);
    getch();

}
