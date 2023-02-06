#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool chkAutomor(int num1)
{
    int aqno = num1 * num1;
    while(num1>0)
    {
        if(num1%10!=sqno%10)
            return false;
        num1/=10;
        sqno/=10;
    }
    return true;
}
int main()
{
    int auno;
    printf("\n\nCheck whether a number is Automorphic or not: \n");
    printf("Input a number: ");
    scanf("%d",&auno);
    if(chkAutomor(auno))
        printf("The given number is a automorphic number.\n");
    else
        printf("The given number isn't a automorphic number.\n");
    return 0;
}

