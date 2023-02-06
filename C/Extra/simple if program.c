// program to count number of boys whose weight is less than 50kg and height is greater than 170cm
#include<stdio.h>
#include<conio.h>
void main()
{
    int count,i;
    float height,weight;
    count=0;
    printf("Enter the weight and height for 10 boys.\n");
    for(i=1; i<=10; i++)
    {
        scanf("%f\t%f",&weight,&height);
        if(weight<50 && height>170)
            count=count+1;
    }
    printf("Number of boys with height<50kg\n");
    printf("and height>170cm = %d\n",count);
}
