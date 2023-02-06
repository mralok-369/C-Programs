//Program to get all roots of a quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float d,root1,root2;
    printf("Enter the a,b and c of a quadratic equation:\n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d<0)
    {
        printf("\n roots are complex number\n");
        printf("roots of the quadratic equation are:  \n");
        printf("%.3f+i%.3f",-b/2*a,sqrt(-d)/(2*a));
        printf("%.3f-i%.3f",-b/2*a,sqrt(-d)/(2*a));
        return 0;
    }
    else if(d==0)
    {
        printf("\n both roots are real and equal\n");
        root1= -b/(2*a);
        printf("roots of the quadratic equatin is: %.3f\n",root1);
        return 0;
    }
    else
    {
        printf("\n roots are real and different\n");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots of quadratic equation are: %.3f and %.3f",root1,root2);
    }
    return 0;
}
