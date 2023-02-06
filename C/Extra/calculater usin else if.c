// Calculator example
#include<stdio.h>
#include<conio.h>
void main()
{
    char op;
    float a,b,result;
    printf("Enter no of a: \n");
    scanf("%f",&a);
    printf("Enter no of b; \n");
    scanf("%f",&b);
    printf("operator [+,-,*,/]::\n");
    fflush(stdin);
    scanf("%c",&op);
    if(op=='+')
    {
        result=a+b;
        printf("result = %.2f",result);
    }
    else if(op=='*')
    {
        result=a*b;
        printf("result = %.2f",result);
    }
    else if(op=='-')
    {
        result=a-b;
        printf("result = %.2f",result);
    }
    else if(op=='/')
    {
        result=a/b;
        printf("result = %.2f",result);
    }
    else
    {
        printf("invalid choice");
    }
    getch();
}
