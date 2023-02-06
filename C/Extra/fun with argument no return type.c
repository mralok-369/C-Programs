// function with argumentd and no return type
#include<stdio.h>
void area(int sqr_side);
int main()
{
    int sqr_side;
    printf("Enter the side of square : ");
    scanf("%d",&sqr_side);
    area(sqr_side);
    return 0;
}
void area(int sqr_side)
{
    int sqr_area;
    sqr_area=sqr_side*sqr_side;
    printf("Area of square =%d",sqr_area);
}
