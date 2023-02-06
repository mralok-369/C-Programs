#include<stdio.h>
void main()
{
    float principal_amt, rate,simple_intrest;
    int time;
    printf("Enter the value of principal amount , rate and time\n");
    scanf("%f %f %d",&principal_amt,&rate,&time);
    simple_intrest = (principal_amt*rate*time)/100.0;
    printf("Amount = Rs. %5.2f\n",principal_amt);
    printf("Rate = Rs. %5.2f\n",rate);
    printf("Time = %d years\n",time);
    printf("Simple Interest = %5.2f\n",simple_intrest);
}
