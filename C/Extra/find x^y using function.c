// find x^y using function
#include<stdio.h>
#include<conio.h>
float power(int int); // fun prototype
// main function body
void main()
{
    int x,y;
    float ans;
    printf("Enter the value of x,y:\n");
    scanf("%d%d",%x,%y);
    ans=power(x,y);  // function call
    printf("\n Your answer is : %.2f",ans);
    getch();
}
// function defination
float power(int a,int b)
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

