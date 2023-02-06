// passing array as an argument
#include<stdio.h>
void sqArr(int[]);

void main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    printf("Array before function call : ");
    for(i=0; i<5; i++)
    {
       printf("%d ",arr[i]);
    }
    sqArr(arr);
    printf("Array after function call: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
}

void sqArr(int a[])
{
    int i;
    for(i=0; i<5; i++)
    {
        a[i]=a[i]*a[i];
    }
}


