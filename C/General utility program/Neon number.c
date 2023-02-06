#include<stdio.h>
int main()
{
    int n,sq,i;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    sq=n*n;
    for(i=sq; i>0; i=i/10)
        sum+=i%10;
    if(sum==n)
        printf("%d is a neon number",n);
    else
        printf("%d is not a neon number",n);
    return 0;
}

