// assignment (=) operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    float p,q;
    char x;

    printf("Enter the character :\n");
    scanf("%c",&x);
    printf("\nEntered character is %c\n",x);

    printf("\nEnter the value of integers a and b :\n");
    scanf("%d%d",&a,&b);
    printf("\na = %d, b = %d",a,b);

    printf("\nEnter floating numbers p and q :\n");
    scanf("%f%f",&p,&q);
    printf("\np = %f, q = %f",p,q);

    getch();
    return 0;

}
