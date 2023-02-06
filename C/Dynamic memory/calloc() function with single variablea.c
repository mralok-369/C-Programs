// calloc() function with single variablea
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int *p;
    p=(int*)calloc(1,sizeof(int));
    *p=23;

    printf("\n Value : %d",*p);
    free(p);
    getch();
    return 0;
}
