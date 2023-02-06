// print series 1,10,2,9,......
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a=1,b=10;
    i=1;
    while(i<=10)
    {
        printf("%d\n",a);
        a++;
        printf("%d\n",b);
        b--;
        i++;
    }
    getch();
}
