// comma operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sqr,cube;
    num=5;
    sqr=(num*num),cube=(num*num*num);
    printf("\n the square of %d is : %d",num,sqr);
    printf("\n the cube of %d is : %d",num,cube);
    getch();
    return 0;

}
