//sum to 10 natural numberusing while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0;
    i=1;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("sum::%d",sum);
}
