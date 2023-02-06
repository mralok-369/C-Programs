#include<stdio.h>
int main()
{
    float celsius,fahrenhite;
    printf("Enterb temp in celsius:: ");
    scanf("%f",&celsius);

    fahrenhite=(1.8*celsius)+32;
    printf("\n\ntemperature in fahrenhite:: %f",fahrenhite);
    return 0;

}
