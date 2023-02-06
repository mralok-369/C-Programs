// insertion sort
#include<stdio.h>
int main()
{
    int size,array[100],i,j,temp;
    printf("Enter size of the array : ");
    scanf("%d",&size);
    printf("Enter %d elements of the array: \n",size);
    for(i=0; i<size; i++)
        scanf("%d",&array[i]);
    for(i=0; i<size; i++)
    {
        j=i;
        while(j>0 && array[j-1] > array[j])
        {
            temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            j--;
        }
    }
    printf("Sorted list in ascending order : \n");
    for(i=0; i<size; i++)
        printf("%d ",array[i]);
    return 0;
}
