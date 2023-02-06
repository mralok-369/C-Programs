// program to read total second and convert it into hour and minute
#include<stdio.h>
void main()
{
    int ts,h,m,s;
    printf("Enter total sec:  ");
    scanf("%d",&ts);
    h=ts/3600;
    ts=ts%3600;
    m=ts/60;
    s=ts%60;
    printf(" hour = %d\n min = %d\n sec = %d",h,m,s);

}
