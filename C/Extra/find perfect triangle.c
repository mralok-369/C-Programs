// Find perfect triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,x,y,z;
    printf("Enter side a : ");
    scanf("%f",&a);
    printf("\nEnter side b : ");
    scanf("%f",&b);
    printf("\nEnter side c : ");
    scanf("%f",&c);
    x=sqrt((a*a)+(b*b));
    y=sqrt((b*b)+(c*c));
    z=sqrt((c*c)+(a*a));
    if(c==x||a==y||b==z)
    {
        printf("\nRight Triangle");
    }
    else
    {
        printf("\nNot Right Triangle");
    }
    getch();

}
