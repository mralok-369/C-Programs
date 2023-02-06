// find x^y using function
float power(int,int);
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    float ans;
    printf("Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    ans=power(x,y);
    printf("\n Your answer is : %.2f",ans);
    getch();
}
float power(int a, int b)
{
    float k=1;
    if(b>0)
    {
        while(b>0)
        {
            k=k*a;
            b--;
        }
    }
    return k;
}
