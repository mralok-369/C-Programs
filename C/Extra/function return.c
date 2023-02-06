// function return demo
#include<stdio.h>
int fun(){
    printf("Hey from fun()\n");
    return 1;
    printf("Bye from fun()\n");
}
void main()
{
    printf("Hey from main()\n");
    fun();
    printf("Bye from main()\n");
}


