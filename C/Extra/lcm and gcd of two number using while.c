/* Find LCM ans GCD of two numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,t1,t2,lcm,gcd;
    printf("Enter Two Numbers: \n");
    scanf("%d %d",&a,&b);
    t1=a;
    t2=b;
    while(t1!=t2)
    {
        if(t1>t2)
        {
            t1=t1-t2;
        }
        else
        {
            t2=t2-t1;
        }
    }
    gcd=t1;
    lcm=(a*b)/gcd;
    printf("LCM = %d and GCD = %d",lcm,gcd);
    getch();
}
