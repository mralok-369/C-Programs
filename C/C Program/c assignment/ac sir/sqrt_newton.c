#include <stdio.h>
float sqrt_newton(float n)
{
    if (n == 1)
        return 1;
    else
    {
        float m = 1, avg;
        for (int i = 0; i < 5; i++)
        {
            avg = (m + n / m) / 2;
            m = avg;
        }
        return avg;
    }
}
int main()
{
    float n;
    printf("Enter a number : ");
    scanf("%f", &n);
    float x = sqrt_newton(n);
    printf("Squre root of %.0f is %f", n, x);
    return 0;
}