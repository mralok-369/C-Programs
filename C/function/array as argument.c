// array as argument
#include<stdio.h>
int max(int[],int);
void main()
{
    int a[5],m,i;
    printf("Enter 5 integers : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    m=max(a,5);
    printf("\nMax is %d",m);
}
int max(int a[],int n)
{
    int m=0,i;
    for(i=0; i<n; i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;
}
