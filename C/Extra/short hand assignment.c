// short-hand assignment (compound assignment) operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int num=10;
    printf("\n num : %d",num);
    num+=10;
    printf("\n num+=10 : %d",num);
    num-=5;
    printf("\n num-=5 : %d",num);
    num*=3;
    printf("\n num*=3 : %d",num);
    num/=5;
    printf("\n num/=5 : %d",num);
    num%=2;
    printf("\n num%=2 : %d",num);
    getch();
    return 0;

}
