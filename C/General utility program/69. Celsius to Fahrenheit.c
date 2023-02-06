#include<stdio.h>
int main()
{
    float celsius, Fahrenheit;
    printf("please enter temprature in celsius: \n");
    scanf("%f",&celsius);
    Fahrenheit = ((celsius*9)/5)+32;
    printf("\n %.2f celsius = %.2f Fahrenheit",celsius,Fahrenheit);
    return 0;
}
