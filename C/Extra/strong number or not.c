// find strong number using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,f,r,sum=0,temp;
    printf(" Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        i=1,f=1;
        r=num%10;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        sum+=f;
        num=num/10;
    }
    if(sum==temp)
        printf("%d is a strong number\n",temp);
    else
        printf("%d is not a strong number",temp);
    getch();
}
