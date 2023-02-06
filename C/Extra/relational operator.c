// relational operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    printf("\n (n<10) is = %d", (n<10));
    printf("\n (n>10) is = %d", (n>10));
    printf("\n (n<=10) is = %d", (n<=10));
    printf("\n (n>=10) is = %d", (n>=10));
    printf("\n (n==10) is = %d", (n==10));
    printf("\n (n!=10) is = %d", (n!=10));

    getch();
    return 0;

}
