#include<stdio.h>
int power(int,int);
int main()
{
    int n,sum=0,t,remainder,digits=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=n;
    // count number of digits
    while(t!=0){
        digits++;
        t=t/10;
    }
    t=n;
    while(t!=0)
    {
        remainder=t%10;
        sum=sum+power(remainder,digits);
        t=t/10;
    }
    if(n==sum)
        printf("%d is an armstrong number\n",n);
    else
        printf("%d isn't an armstrong number\n",n);
    return 0;
}
int power(int n, int r){
    int c,p=1;
    for(c=1; c<=r; c++)
        p=p*n;
    return p;
}
