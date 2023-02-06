#include<stdio.h>
void main()
{
    float I,R,V;
    printf("Enter the value of current,I= ");
    scanf("%f",&I);
    printf("Enter the value of Resistance,R= ");
    scanf("%f",&R);
    V=I*R;
    printf("The required Voltage ,V= ");
    printf("%f",V);
}
