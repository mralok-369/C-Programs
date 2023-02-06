// addition operation using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int p;
    int *ptr;
    ptr=&p;
    printf("Enter Value: ");
    scanf("%d",ptr);
    *ptr = *ptr+5;
    printf("Value of p is : %d",p);
    printf("\n value of *ptr : %d",*ptr);
    getch();
}
