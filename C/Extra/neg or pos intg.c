/* check whethe a number is positve or negative intger */
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("\n%d is a positive number",x);
    }
    else{
        printf("\n%d is a negative number",x);
    }
}
