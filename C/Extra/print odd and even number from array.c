// print odd and even number from array
#include<stdio.h>
#include<conio.h>
#define MAX 50
void main()
{
    int arr[MAX],n,i;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter %d positive elements \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEven Numbers: ");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers: ");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
}
