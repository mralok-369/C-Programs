// swapping of two array
#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],i;
    printf("Enter first array: \n");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    printf("Enter second array: \n");
    for(i=0; i<5; i++)
        scanf("%d",&b[i]);
    printf("\nArray before swapping");
    printf("\nFirst Array: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSecond Array : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",b[i]);
    }
    for(i=0; i<5; i++)
    {
        // write swapping technique
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("\n\nArray After Swapping");
    printf("\nFirst Array: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSecond array: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",b[i]);
    }
}
