// find(square cube factorial) using function
#include<stdio.h>
void square(int);
void cube(int);
void fact(int);

void main()
{
    int n;
    int ch;
    printf("Enter a number : ");
    scanf("%d",&n);
    do
    {
        printf("\n\nPress 1:square");
        printf("\n\nPress 2:cube");
        printf("\n\nPress 3:Factorial";
        printf("\n\nPress 4:Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            square(n);
            break;
        case 2:
            cube(n);
            break;
        case 3:
            fact(n);
            break;
        case 4:
            printf("\nEnd of the program");
            break;
        default:
            printf("Invalid Choice\n");
        }
    }while(ch!=4);
}

void square(int n)
{
    printf("\nSquare of %d is %d",n,(n*n));
}
void cube(int n)
{
    printf("\nCube of %d is %d",n,(n*n*n));
}
void fact(int n)
{
    int num=n,f=1;
    while(num>=1)
    {
        f=f*num;
        num--;
    }
    printf("factorial of %d is %d",n,f);
}
