// chain of pointers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 10;
    int *p, **pp, **ppp, ****pppp;

    p = &a;
    printf("\n p =%u",p);
    printf("\n *p = %d",*p);

    pp = &p;
    printf("\n\n pp = %u",pp);
    printf("\n *pp = %u",*pp);
    printf("\n **pp = %d",**pp);

    ppp = &pp;
    printf("\n\n ppp = %u",ppp);
    printf("\n *ppp = %u",*ppp);
    printf("\n **ppp = %u",**ppp);
    printf("\n ***ppp = %d",***ppp);

    pppp = &ppp;
    printf("\n\n pppp = %u",pppp);
    printf("\n *pppp = %u",*pppp);
    printf("\n **pppp = %u",**pppp);
    printf("\n ***pppp = %u",***pppp);
    printf("\n ****pppp = %d",****pppp);

    getch();
    return 0;
}
