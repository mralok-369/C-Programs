#include<stdio.h>
#include<conio.h>
void main()
{
    long i,k;
    printf("Enter two intergers\n");
    scanf("%ld %ld",&i ,&k);
    printf("Before swapping\n i=%ld \n k=%ld",i,k);
    i=i^k;
    k=i^k;
    i=i^k;
    printf("\nAfter swapping \n i=%ld \n k=%ld",i,k);
}
