// goto statement forward jump
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the value of a==");
    scanf("%d",&a);
    printf("\n Nils patel");
    if(a==10)
    {
        goto LABEL;
    }
    printf("\n this simple");
    printf("\n program");

    LABEL:
        printf("\n go to statement");
        printf("\n forward jump");
        getch();
        return 0;
}
