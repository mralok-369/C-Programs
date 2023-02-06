// searchimg an elements in array
#include<stdio.h>
void main()
{
    int arr[10]={10,21,36,85,46,89,896,45,14,78};
    int i,n;
    int found=0;
    printf("Enter the number which is you want to seacrh : ");
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(n==arr[i])
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Yes number is persent in the array\n");
    }
    else
    {
        printf("No, number is not persent in the array\n");
    }
}
