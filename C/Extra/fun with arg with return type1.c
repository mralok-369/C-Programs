// function with argument and with return type
#include<stdio.h>
#include<conio.h>
int sos(int); // function declaration

void main()
{
    int n,ans;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    ans=sos(n);  // calling to fun sos and passing the value of n to sos function and store the return value in ans
    printf("\n The sum = %d",ans);  // printf the value which return by sos fun
    getch();
}

// function defination
int sos(int i)     // store the value of int in i which passes by main function
{
    int j=1,k=0;
    for(j=1; j<=i; j++)
    {
        k=j*j;
    }
    return k;  // return the value of k to the main function
}
