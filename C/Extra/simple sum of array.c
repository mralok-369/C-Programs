// find sum of array
#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10],i,sum=0;
    printf("Enter the elements of array :");
    for(i=0; i<10; i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("\nsum = %d",sum);
    getch();
}
