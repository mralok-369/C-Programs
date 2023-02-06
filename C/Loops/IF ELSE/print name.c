#include<stdio.h>
#include<conio.h>
void main()
{
    int T,A,B,i;
    printf("Enter T : ");
    scanf("%d",&T);
    for(i=0; i<T; i++)
        scanf("%d\t%d",&A ,&B);
    for(i=0; i<T; i++)
        printf("%d\n",A+B);
    getch();
}
