// array taking input from user
#include<stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("Enter elements of the array-\n");
    for(i=0; i<5; i++)
    {
        printf("Enter value for array[%d]-",i);
        scanf("%d",&arr[i]);
    }
    printf("\nContent of tha array-\n");
    for(i=0; i<5; i++)
    {
        printf("Value at array[%d] is %d\n",i,arr[i]);
    }
}
