#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter any two intergers:\n");
    scanf("%d 5d",&a,&b);
    sum = a + ~b + 1;
    printf("Difference of two integers: %d",sum);
    return 0;
}
