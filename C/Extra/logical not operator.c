// Logical NOT (!) operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf(" Checking NOT operator\n");
    printf(" 0=false, 1=true\n");

    a=!(5<1);
    printf("\n a=!(5<1) = %d",a);

    a=!(5>1);
    printf("\n a=!(5>1) = %d",a);

    getch();
    return 0;

}
