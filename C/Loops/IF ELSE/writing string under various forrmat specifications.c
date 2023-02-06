// writing string under various forrmat specifications
#include<stdio.h>
void main()
{
    char country[15]="United Kingdom";
    printf("\n");
    printf("*123456789012345*\n");
    printf("----------------------\n");
    printf("%15s\n",country);
    printf("%5s\n",country);
    printf("%15.6s\n",country);
    printf("%-15.6s\n",country);
    printf("%15.0s\n",country);
    printf("%.3s\n",country);
    printf("%s\n",country);
    printf("-----------------------");
}
