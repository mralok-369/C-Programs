#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,max,num,i;
    printf("Enter the number of random numbers you want \n");
    scanf("%d",&n);
    printf("Enter the maximum value of random number\n");
    scanf("%d",&max);
    printf("%d random number from 0 to %d are :\n",n,max);
    randomize();

    for(i=1; i<=n; i++)
    {
        num = random(max);
        printf("%d\n",num);

    }
    getch();
    return 0;
}
