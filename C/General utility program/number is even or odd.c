#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n%d is a even number",num);
    else
        printf("\n%d is a odd number",num);
    return 0;
}
