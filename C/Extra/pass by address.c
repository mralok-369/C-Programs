//pass by address (swap number)
#include<stdio.h>
void swap(int*, int*);

void swap(int *a, int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int main()
{
    int x,y;
    printf("Enter the value of x and y \n");
    scanf("%d %d",&x,&y);
    printf("Before swapping \n x = %d\n y = %d\n",x ,y);
    swap(&x,&y);
    printf("After swappping \n x = %d\n y = %d",x,y);
    return 0;
}
