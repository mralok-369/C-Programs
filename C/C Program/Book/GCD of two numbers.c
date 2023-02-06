// GCD of two numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>
int GCD(int m ,int n);
void main()
{
    int num1,num2;
    printf("Enter the two numbers to find gcd : ");
    scanf("%d %d",&num1,&num2);
    printf("\nGCD of %d and %d is %d\n",num1,num2,GCD(num1,num2));
    getch();
}
int GCD(int a,int b)
{
    if(b>a)
        return GCD(b,a);
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}
