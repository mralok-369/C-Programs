// returning by reference in pointer example
#include<stdio.h>
#include<conio.h>
int* max(int*,int*); // function prototype
int main()
{
    int a=23,b=14, *p;
    p=max(&a,&b);
    printf("\n Maximum = %d",*p);
    getch();
    return 0;
}

int* max(int *pa, int *pb)
{
    if(*pa>*pb)
        return pa;
    else
        return pb;
}
