//find perfect square root
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,a;
    printf(" Enter the value of n : \n");
    scanf("%d",&n);
    a=sqrt(n);
    if(n-(a*a)==0)
        printf("\n\n\nIt is perfect square");
    else
        printf("\n\n\nIt is not a perfect square");
    getch();
}
