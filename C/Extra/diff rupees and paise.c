#include<stdio.h>
#include<conio.h>
void main()
{
    int r,p;
    float a;
    printf("Enter total rupees:\n");
    scanf("%f",&a);
    r=a;
    printf("\ntotal rupees=%d\n",r);
    p=(a-r)*100;
    printf("\ntotal Paisa=%d\n",p);
    getch();
}
