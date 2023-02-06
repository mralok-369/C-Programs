//bitwise operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=3,b=6,c;
    printf("\n a = %d",a);
    printf("\n b = %d",b);

    c=a&b;
    printf("\n a&b = %d",c);
    c=a|b;
    printf("\n a|n = %d",c);
    c=a^b;
    printf("\n a^b = %d",c);
    c=~a;
    printf("\n ~a = %d",c);
    c=a<<3;
    printf("\n a << 3 = %d",c);
    c=b>>2;
    printf("\n b >> 2 = %d",c);
    getch();
    return 0;

}
