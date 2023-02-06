#include<stdio.h>
void main()
{
    int gs,bs,da,ta;
    printf("Enter basic salry:\n");
    scanf("%d",&bs);
    da=(10*bs)/100;
    printf("da=%d\n",da);
    ta=(12*bs)/100;
    printf("ta=%d\n",ta);
    gs=bs+ta+da;
    printf("gross salry= %d",gs);

}
