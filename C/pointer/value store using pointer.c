//value store using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int *p,a[10],i;
    p=&a[10];
    printf("Enter the value : \n");
    for(i=0; i<5; i++,p++)
    {
        scanf("%d",&*p);
    }
    for(i=0; i<5; i++,p--)
    {
        printf("\n%d",*p);
    }
    getch();
}
