#include<stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("Enter elements of the array-\n");
    for(i=0; i<5; i++)
    {
        printf("Enter value for arr[%d]-",i);
        scanf("%d",&arr[i]);
    }
    printf("Content of the array-\n");
    for(i=0; i<5; i++)
    {
        printf("value at arr[%d] is %d\n",i,arr[i]);
    }
}
