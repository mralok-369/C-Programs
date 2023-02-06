// display first N natural number using do-while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter Number : ");
    scanf("%d",&n);

    i=1;
    do
    {
        printf(" %d",i);
        i++;
    }
    while(i<=n);
    getch();
    return 0;
}
