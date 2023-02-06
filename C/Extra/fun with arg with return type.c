// function with argument with return value
int soo(int); // function declaration
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ans;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    ans=soo(n); //function call
    printf("\n The sum is : %d",ans);
    getch();
}

// function defination
int soo(int i) //passing value by main function
{
    int j, k=0;
    for(j=1; j<=i; j+=2)
    {
        k+=j;
    }
    return k;  // function return a value k
}
