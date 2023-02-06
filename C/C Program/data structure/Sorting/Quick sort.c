// quick sort
#include<stdio.h>
//void quickSort(int arr[100],int low, int high);
int main()
{
  int k,size,array[100];
  printf("Enter the size of array : ");
  scanf("%d",&size);
  printf("Enter %d elements of array.\n",size);
  for(k=0; k<size; k++)
    scanf("%d",&array[k]);
  quickSort(array,0,size-1);
  printf("Order of sorted array : \n");
  for(k=0; k<size; k++)
    printf("%d ",array[k]);
  return 0;
}
// quick sort function
void quickSort(int arr[100],int low, int high)
{
    int i,j,pivot,temp;
    if(low<high)
    {
        pivot = low;
        i = low;
        j = high;
        while(i<j){
            while(arr[i] <= arr[pivot]&&i<high)
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quickSort(arr,low,j-1);
        quickSort(arr,j+1,high);
    }
}

