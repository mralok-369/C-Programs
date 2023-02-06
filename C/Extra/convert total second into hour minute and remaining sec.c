// convert total second into hour minute and remaining seccond
#include<stdio.h>
#include<conio.h>
void main()
{
    int ts,h=0,m=0,s;
    printf("Enter total seconds : ");
    scanf("%d",&ts);
    while(ts>=60)
    {
        m++;
        while(m>=60)
        {
            h++;
            m=m-60;
        }
        ts=ts-60;
    }
    printf("\nHH : MM : SS = %d : %d : %d",h,m,ts);
    getch();
}
