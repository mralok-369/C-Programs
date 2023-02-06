// returning by reference in pointer
#include<stdio.h>
#include<conio.h>
int* max(int*, int*);
int main()
{
    int a=23, b=14,*p;
    p=max(&a,&b);
    printf("\n Maximum = %d", *p);
    getch();
    return 0;
}
// function defination
int* max(int *pa, int *pb)
{
    if(*pa > *pb)
        return pa;
    else
        return pb;
}
