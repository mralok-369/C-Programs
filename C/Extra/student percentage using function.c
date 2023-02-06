// student percentage using function
#include<stdio.h>
void getmarks();
void callresults(int []);
void showresult(float);

void main()
{
    printf("\nResult \n");
    getmarks();
}

void getmarks()
{
    int sub[5];
    int i;
    printf("\n Enter marks of 5 subjects : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&sub[i]);
    }
    callresults(sub);
}

void callresults(int arr[])
{
    int total = 0;
    int i;
    float per;
    for(i=0; i<5; i++)
    {
        total = total+arr[i];
    }
    per=(float)total/5;
    showresult(per);
}
void showresult(float result)
{
    printf("\n Percentage is %0.2f\n",result);
}
