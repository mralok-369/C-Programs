// function with no arguments and no return type
#include<stdio.h>
void area();
int main()
{
    area();
    return 0;
}
void area()
{
    int sqr_area,sqr_side;
    printf("Enter the side of square: ");
    scanf("%d",&sqr_side);
    sqr_area=sqr_side*sqr_side;
    printf("Area of square = %d",sqr_area);

}
