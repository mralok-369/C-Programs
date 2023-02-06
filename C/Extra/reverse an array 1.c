// print an array in reverse order
#include<stdio.h>
#define MAX 100  // define maximum size of array
int main()
{
    int arr[MAX];
    int n,i;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter %d elments of array \n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\nArray in reverse order:\n");
    for(i=n-1; i>=0; i--)
        printf("%d\n",arr[i]);
    return 0;
}
