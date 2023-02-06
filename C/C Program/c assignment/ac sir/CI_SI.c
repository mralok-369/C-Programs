#include <stdio.h>
void interest(int year, int rate, int amount)
{
    float p;
    for (int i = 0; i <= year; i++)
    {
        for (int j = rate - 1; j <= 10; j++)
        {
            if (i == 0 && j == rate - 1)
            {
                printf("YEAR ");
            }
            else if (i > 0 && j == rate - 1)
            {
                printf("%2d.    ", i);
            }
            else if (j > rate - 1 && i == 0)
            {
                printf("%10d%% ", j);
                if(j==10)
                {
                    printf("\n");
                }
            }
            else
            {
                p = (float)(amount * i * j) / 100;
                printf("%10.2f  ", p);
            }
        }
        printf("\n");
    }
}
int main()
{
    int year, rate, amount;
    printf("Enter amount, year and rate -> ");
    scanf("%d %d %d", &amount, &year, &rate);
    interest(year, rate, amount);
    return 0;
}