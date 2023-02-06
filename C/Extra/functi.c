// find larger value using function
int mx(int,int,int)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,ans;
    printf("\n Enter the value of a,b,c:: \n");
    scanf("%d %d %d",%a,&b,&c);
    ans=mx(a,b,c);
    printf("the maximum number is :: %d",ans);
    getch();
}
int mx(int i,int j,int k)
{
    int g;
    g=((i<j)?((i>k)?i:k):(j>k)?j:k);
    return g;
}
