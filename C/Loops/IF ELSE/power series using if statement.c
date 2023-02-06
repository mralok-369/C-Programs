// program to evaluate the power series e^x=1+x+x^2/2!+.....
#define ACCURACY 0.0001
#include<stdio.h>
void main()
{
    int n,count;
    float x,term,sum;
    printf("Enter value of x :");
    scanf("%f",&x);
    n=term=sum=count=1;
    while(n<=100)
    {
        term=term*x/n;
        sum = sum + term;
        count=count+1;
        if(term<ACCURACY)
            n=999;
        else
            n=n+1;
    }
    printf("terms = %d sum= %f\n",count,sum);
}
