// Automatic or implicit type conversion
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=20;
    float c=10.50;
    long d=20L,e;

    e=((a+c)*d)+b;
    printf("\nValue of e ::: %ld",e);

    getch();
    return 0;
}
