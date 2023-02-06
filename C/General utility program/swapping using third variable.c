#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter two numbers for swapping :\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping \n\na= %d and b= %d\n",x,y);
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping \n\na= %d and b= %d",x,y);
    return 0;
}
