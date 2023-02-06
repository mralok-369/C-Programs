// read an array and find out max (Array as argument)
#include<stdio.h>
int max(int[],int); // function prototype
void main()
{
    int a[5], m, i;
    printf("Enter 5 integers ");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    m=max(a,5);  // function calling
    printf("\n Max is %d",m);
}
//function defination
int max(int a[],int n)
{
    int m=-32768,i;
    for(i=0; i<n;i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;
}
