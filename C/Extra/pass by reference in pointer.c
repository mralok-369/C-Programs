// pass by reference in pointer example
#include<stdio.h>
#include<conio.h>
void square(int* );  // fun prototype
int main()
{
    int a=10;
    square(&a);
    printf("\n a= %d",a);
    getch();
    return 0;
}
void square(int *pa)
{
    *pa = *pa * *pa;
    printf("\n *pa = %d",*pa);
}
