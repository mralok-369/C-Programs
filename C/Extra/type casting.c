//type casting
#include<stdio.h>
#include<conio.h>
int main()
{
    float a;
    int x=10,y=3;

    a=x/y;
    printf("\n value of a (without casting) = %f",a);

    a=(float)x/y;
    printf("\n value of a (with casting) = %f",a);

    getch();
    return 0;

}
