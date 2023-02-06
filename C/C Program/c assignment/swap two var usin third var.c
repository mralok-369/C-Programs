// swap to variables using third variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter Two variables : \n");
    scanf("%d%d",&a,&b);

    printf("Before swapping:\n");
    printf("a=%d, b=%d",a,b);
    temp=a;
    a=b;
    b=temp;

    printf("\nAfter swapping: \n");
    printf("a=%d, b=%d",a,b);
    getch();
    return 0;
}
