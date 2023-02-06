#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number for swaping :\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping \n\na= %d and b= %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter swapping \n\na= %d and b= %d\n\n",a,b);
    return 0;
}
