// function with no argument and having return type
#include<stdio.h>
int area();
int main()
{
    int rec_area;
    rec_area = area();
    printf("Area of rectangle = %d",rec_area);
    return 0;
}
int area()
{
    int rec_area,side1,side2;
    printf("Enter the sides of rectangle :");
    scanf("%d %d",&side1,&side2);
    rec_area=side1*side2;
    return(rec_area);
}
