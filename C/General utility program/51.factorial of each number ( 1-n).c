#include<stdio.h>
void main()
{
    int n;
    int cn;
    int i,j;
    long int fact;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of number between 1 to n : \n");
    printf("Number: factorial\n");
    for(i=1; i<=n; i++)
    {
        cn =i;
        fact = 1;
        for(j=1; j<=cn; j++)
        {
            fact = fact*j;

        }
        printf("%5d : %d \n",cn,fact);
    }
}
