// find leap year
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a year : \n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("\n %d is a leap year\n",year);
    }
    else if(year%100==0)
    {
        printf("\n %d is naot a leap year\n",year);
    }
    if(year%4==0)
    {
        printf("\n %d is a leap year\n",year);

    }
    else
    {
        printf("\n %d is not a leap year\n",year);
    }
    return 0;


}

