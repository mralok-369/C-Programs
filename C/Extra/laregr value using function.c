// find larger value using function
#include<stdio.h>
#include<conio.h>
int mx(int,int,int);  //fun declaration
void main()
{
    int a,b,c,ans;
    printf("\n Enter the value of a , b, c :  \n");
    scanf("%d%d%d",&a,&b,&c);
    ans=mx(a,b,c);  // calling to the function mx
    printf("The maximum Number is : %d",ans);
    getch();
}
//function defination
int mx(int i,int j,int k)
{
    int g;
    g=((i<j)?((i>k)?i:k):(j>k)?j:k);
    return g;
}
