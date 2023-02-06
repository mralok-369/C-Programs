#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    printf("Enter a number \n");
    int num,mulby2,mulby3,digit,concatNum=0,i;
    scanf("%d",&num);
    int count[10]={0};
    bool flag = true;
    mulby2 = num*2;
    mulby3 = num*3;
    concatNum+=num;
    concatNum=concatNum*pow(10,countDigits(mulby2))+mulby2;
    concatNum=concatNum*pow(10,countDigits(mulby3))+mulby3;
    while(concatNum>0)
    {
        digit=concatNum%10;
        if(++count[digit]>1)
        {
            flag=false;
            break;
        }
        concatNum=concatNum/10;
    }
    for(i=1; i<10; i++)
    {
        if(count[i]==0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        printf("Fascinating number");
    else
        printf("Non Fascinating number");
    return 0;
}
int countDigits(int n){
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}

