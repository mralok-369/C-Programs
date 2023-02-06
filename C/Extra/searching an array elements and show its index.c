// searching an elements in array and show its index number
#include<stdio.h>
void main()
{
    int arr[10]={10,21,64,67,7,57,94,36,101,75};
    int i,n;
    int found=-1;
    printf("Enter the number you want to search: ");
    scanf("d",&n);
    for(i=0; i<10; i++)
    {
        if(n==arr[i])
        {
            found=i;
            break;
        }
    }
    if(found!=-1)
    {
        printf("Yes number is present in array at the index : %d\n",found);
    }
    else
    {
        printf("No number is not persent in the array \n");
    }
}
