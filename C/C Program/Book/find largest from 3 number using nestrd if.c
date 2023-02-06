// find largest number among three numbers using nested if
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    printf("Enter three numbers\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("\n Largest number is : ");
    if(a>b)
    {
        if(a>c)
            printf("%f\n",a);
        else
            printf("%f\n",c);
    }
    else
    {
        if(c>b)
            printf("%f\n",c);
        else
            printf("%f\n",b);
    }
}
