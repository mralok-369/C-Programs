// bubble sort
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[50],n,i,j,swap;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(array[j]>array[j+1])  /*for decreasing order use<*/
            {
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    printf("Sorted ;ist in ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
