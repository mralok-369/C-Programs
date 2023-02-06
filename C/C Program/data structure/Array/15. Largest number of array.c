#include<stdio.h>
int main()
{
    int arr[100],i,n,max;
    printf("Enter the size of array<100 : ");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("MAx element is %d",max);
    return 0;
}
