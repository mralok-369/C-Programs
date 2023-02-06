#include<stdio.h>
int main()
{
    int arr[100],i,n,temp;
    printf("Enter the size of array<100 : ");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray in reverse order: \n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

