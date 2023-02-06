#include<stdio.h>
int main()
{
    int n;
    double x;
    printf("Enter a number: ");
    scanf("%d",&n);
    x=sqrt(n+1);
    if((int)x==x)
        printf("%d is a sunny number",n);
    else
        printf("%d is not a sunny number",n);
    return 0;
}

