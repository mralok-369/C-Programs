#include<stdio.h>
int main()
{
    int arr[100],i,n,num,flag=0;
    printf("Enter the size of array<100 : ");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which you want to search: ");
    scanf("%d",&num);
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            flag=1;
            printf("\nYes , Number is at position : %d",i);
            break;
        }
    }
    if(flag==0)
        printf("\nNumber is not persent in array");
    return 0;
}

