#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==1)
            count++;
        n=n/2;
    }
    if(count%2==0)
    {
        printf("Evil number");
    }
    else
    {
        printf("Odious number");
    }
    return 0;
}
