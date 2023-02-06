// print series 1,-4,9,-16,25.....
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("-%d\t",i*i);
        }
        else
        {
            printf("%d\t",i*i);
        }
        i++;
    }
    getch();
}
