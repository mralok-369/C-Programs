#include<stdio.h>
int main()
{
    int n,div,digit,s=0,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(div=n; div>0; div=div/10)
    {
        digit = div%10;
        s+=digit;
        p*=digit;
    }
    if(s == p)
        printf("It is spy number");
    else
        printf("Not spy number");
    return 0;
}

