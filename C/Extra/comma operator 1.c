// uise of comma operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    c=(a=10,b=20,a+b);
    printf("\n a : %d",a);
    printf("\n b : %d",b);
    printf("\n c : %d",c);
    getch();
    return 0;


}
