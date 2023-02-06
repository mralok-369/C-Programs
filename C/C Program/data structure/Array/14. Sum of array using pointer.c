#include<stdio.h>
int main()
{
    int arr[5];
    int i,sum=0;
    int *ptr;
    ptr = arr;
    printf("Enter 5 elements of array: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<5; i++)
    {
        sum+=*ptr;
        ptr++;
    }
    printf("\nSum : %d",sum);
    return 0;
}
