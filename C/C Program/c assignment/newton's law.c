# include<stdio.h>
float absolute(float x)
{
     if (x < 0)
         x = -x;
     return x;
}

float square(float x)
{
    float guess = 1;

    while(absolute(guess*guess - x) >= 0.0001 )
        guess = ((x/guess) + guess) / 2;

    return guess;
}

int main(void)
{
    printf("square root of 2 is %f\n", square(2));
    printf("square root of 3 is %f\n", square(3));
    return 0;
}
