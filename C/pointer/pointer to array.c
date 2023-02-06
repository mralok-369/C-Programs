#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,arr[100],*ptr;
    ptr=arr;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    printf("Entered numbers : \n");
    for(i=0; i<n; i++){
        printf("%d\n",*ptr);
        ptr++;
    }
}
