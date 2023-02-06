#include<stdio.h>
float PI = 3.14;
int main()
{
    float radius,ci;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    ci = 2* PI * radius;
    printf("Circumference of circle : %f",ci);
    return 0;
}
