#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,sub,mul,idiv,rem;
    float rdiv;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);

    sum=a+b;
    sub=a-b;
    mul=a*b;
    idiv=a/b;
    rem=a%b;
    rdiv=(float)a/(float)b;

    printf("\n sum = %d",sum);
    printf("\n sub = %d",sub);
    printf("\n mul = %d",mul);
    printf("\n idiv = %d",idiv);
    printf("\n rem = %d",rem);
    printf("\n rdiv = %f",rdiv);

    getch();
    return 0;
}
