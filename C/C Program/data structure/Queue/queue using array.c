// queue using array
#include<stdio.h>
#include<conio.h>
int arr[10],i,f=0,r=0;

void push(int x)
{
    if(r==4)
    {
        printf("Queue is overflow\n");
    }else{
        arr[r++]=x;
    }
}

void pop()
{
    if(f==-1)
    {
        printf("Queue is underflow\n");
    }else{
        arr[f++];
    }
}

void disp(){
    for(i=f; i<r; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("Queue is : \n");
    disp();
    pop();
    printf("Queue after pop a element: \n");
    disp();
    return 0;
}
