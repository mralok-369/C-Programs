// program to mutiply given number by 4 using bitwise operators
#include<stdio.h>
void main()
{
    long num,temp;
    printf("Enter an Integer\n");
    scanf("%ld",&num);
    temp=num;
    num=num<<2;
    printf("%ld x 4 = %ld",temp,num);
    getch();

}
