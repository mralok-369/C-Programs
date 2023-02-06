// practice entered year is a leap year or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a year : \n");
    scanf("%d",&year);
    if(year%4==0)
        printf("it is a leap year\n");
    else
        printf("it is not a leap year\n");
    return 0;
}
