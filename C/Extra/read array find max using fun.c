/* read an array and find out max. (array as argument)*/
#include<stdio.h>
int max(int[],int);
void main()
{
    int a[5],m,i;
    printf("Enter 5 integers: \n");
    for(i=0; i<5; i++)
        scanf("%d",&a[5]);
    m=max(a,5);
    printf("\n max is %d",m);
}
int max(int a[],int n)
{
    int m=-32768,i;
    for(i=0; i<n; i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return (m);
}
