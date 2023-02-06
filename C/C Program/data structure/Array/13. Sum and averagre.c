#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    float avg;
    printf("Enter five integers: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        avg = sum/5.0;
    }
    printf("Sum is : %d\n",sum);
    printf("Average is : %f\n",avg);
    return 0;
}
