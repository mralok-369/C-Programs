// addition operation on pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int p;
    int *ptr;
    ptr = &p;
    printf("Enter value : ");
    scanf("%d",ptr);
    *ptr=*ptr+5;
    printf("\n value of p is : %d",p);
    printf("\n value of *ptr :%d",*ptr);
    getch();
}
