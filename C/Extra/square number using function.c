// sqr of a num using function
#include<stdio.h>
int sqr(int);
int main()
{
    int num,ans;
    printf("Enter the number\n");
    scanf("%d",&num);
    ans=sqr(num);
    printf("squre is : %d\n",ans);
    return 0;
}
int sqr(int a)
{
    return a*a;
}

