// print even and odd number of array separately
#include<stdio.h>
#define MAX 50
void main()
{
    int arr[MAX],n,i;
    printf("Enter size of arrar : \n");
    scanf("%d",&n);
    printf("Enter %d positive elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nEven Number: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n Odd number: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
}
