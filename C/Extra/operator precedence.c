// program to explain operator precedence
#include<stdio.h>
#include<conio.h>
int main()
{
    float result;
    result=4.0+3.0*8.0/4.0;
    printf("\n%f",result);
    result=1.0/2.0+3.0;
    printf("\n%f",result);
    result=(1.0+2.0)/3.0;
    printf("\n%f",result);
    result=(1.0+2.0/3.0)+4.0;
    printf("\n%f",result);
    getch();
    return 0;

}
