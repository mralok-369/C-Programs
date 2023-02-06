// program to elctric power distribution company charges its domestic consumer
#include<stdio.h>
#include<conio.h>
void main()
{
    int units,custnum;
    float charges;
    printf("Enter customer no and its units consumed \n");
    scanf("%d %d",&units,&custnum);
    if(units<=200)
        charges=0.5 * units;
    else if(units<=400)
        charges=100+0.65*(units-200);
    else if(units<=600)
        charges=230+0.8*(units-400);
    else
        charges=390+(units-600);
    printf("\n\nCustomer no: %d \ncharges= %.2f\n",custnum,charges);
}
