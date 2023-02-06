// arithmetic operation on pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,*p1,*p2,x,y,z;
    printf("Enter the value of a and b: \n");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    x=*p1**p2-6;
    y=4*-*p2;
    printf("a=%d\t b=%d\t x=%d\t y=%d\n",a,b,x,y);
    *p1=*p1+20;
    *p2=*p2-10;
    z=*p1**p2-6;
    printf("a=%d\t b=%d\t z=%d\n",a,b,z);
    getch();

}
