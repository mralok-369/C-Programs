// nested if else example
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    printf("Enter the value of c : \n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\na is big value.");
        }
        else
        {
            printf("\nc is big value.");
        }
    }
    else
    {
        if(b>c)
        {
            printf("\nb is big value.");
        }
        else
        {
            printf("\nc is big value.");
        }
    }
    getch();

}
