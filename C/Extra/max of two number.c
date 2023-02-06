//Find maximum number between two
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,max;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);

    if(a<b)
        max=b;
    else
        max=a;
    printf("Max is %d",max);
    return 0;

}
