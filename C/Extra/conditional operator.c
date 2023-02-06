//find maximum among three using conditional operator
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("max is: %d",a>b?a>c?a:c:b>c?b:c);
}
