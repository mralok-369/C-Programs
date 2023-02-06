// simple do-while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int n=0;
    do
    {
        printf("Enter no.(0 for exit) :: ");
        scanf("%d",&n);
    }
    while(n!=0);

    getch();
    return 0;

}
