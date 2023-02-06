// call by reference
#include<stdio.h>
#include<conio.h>
void cube(int*);
int main()
{
    int a;
    printf("Enter an integer for cube : ");
    scanf("%d",&a);
    cube(&a);
    printf("\n Cube of Integer = %d",a);
    getch();
    return 0;
}
void cube(int *p)
{
    *p = *p * *p * *p;
}
