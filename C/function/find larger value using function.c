// find larger value using function

int max(int,int,int);
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    int ans=max(a,b,c);
    printf("\nThe maximum number is : %d",ans);
    getch();
}
int max(int i, int j, int k)
{
    int g;
    g=((i<j)?((i>k)?i:k):(j>k)?j:k);
    return g;
}
