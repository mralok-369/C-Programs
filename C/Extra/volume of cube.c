#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,h,v;
    printf("Enter the value of lenght:\n");
    scanf("%d",&l);
    printf("Enter the value of breadth:\n");
    scanf("%d",&b);
    printf("Enter the value of height:\n");
    scanf("%d",&h);

    v =l*b*h;
    printf("volume of cube= %d",v);
    getch();
}
