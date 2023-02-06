#include<stdio.h>
int main()
{
    int n;
    int flag=1;
    long cube;
    printf("Enter a number: ");
    scanf("%d",&n);
    cube = n*n*n;
    while(n!=0)
    {
        if(n%10!=cube%10)
        {
            flag=0;
            break;
        }
        n/=10;
        cube/=10;
    }
    if(flag==1)
    {
        printf("number is a trimorphic number");
    }
    else
    {
        printf("Number is not a trimorphic number");
    }
    return 0;
}
