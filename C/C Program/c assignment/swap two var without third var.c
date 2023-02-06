// swapping two variable without using third variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter Two variables: \n");
    scanf("%d %d",&a,&b);

    printf("Before Swapping: \n");
    printf("a=%d, b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping; \n");
    printf("a=%d, b=%d",a,b);
    getch();
    return 0;


}
