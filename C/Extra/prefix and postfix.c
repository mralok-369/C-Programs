// prefix and postfix increment(++) operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b;
    b=++a;
    printf("\n After prefix increment : ");
    printf("\n a = %d and b = %d",a,b);

    a=10;
    b=a++;
    printf("\n After postfix increment : ");
    printf("\n a = %d and b = %d",a,b);

    getch();
    return 0;

}
