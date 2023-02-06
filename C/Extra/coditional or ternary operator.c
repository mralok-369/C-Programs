// conditional OR ternary operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers:::  ");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    printf("\n Maximum number is::: %d",max);
    getch();
    return 0;

}
