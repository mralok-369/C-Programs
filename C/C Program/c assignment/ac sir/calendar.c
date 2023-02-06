#include <stdio.h>
int main()
{
    int i, j, n, day, a = 1;
num:
    printf("Enter number of days you want ");
    scanf("%d", &n);
    if (n > 31 || n < 28)
    {
        printf("Invalid!\n");
        goto num;
    }
start:
    printf("Enter number (1=sunday 2=monday.......7=saturday) : ");
    scanf("%d", &day);
    if (day > 7 || day < 1)
    {
        printf("Invalid!\n");
        goto start;
    }
    printf("Su  Mo  Tu  We  Th  Fr  Sa\n");
    for (j = 1; j < n + day; j++)
    {
        if (j >= day)
        {
            printf("%2d  ", a);
            a++;
        }
        else
        {
            printf("    ");
        }
        if (j % 7 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}