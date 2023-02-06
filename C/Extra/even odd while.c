// find even odd numbers between 1-100
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    i=1;
    while(i<=20)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
        else
        {
            printf("%d is odd\n",i);
        }
        i++;
    }
    getch();

}
