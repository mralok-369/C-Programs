#include<stdio.h>
int main()
{
    int arr[100],i,n,min;
    printf("Enter the size of array<100 : ");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Min element is %d",min);
    return 0;
}

