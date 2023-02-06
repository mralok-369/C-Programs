// stack using array
#include<stdio.h>
#define MAX_SIZE 5
int arr[MAX_SIZE],top=-1,i;

void push(int x)
{
    if(top==(MAX_SIZE-1))
    {
        printf("Stack is Overflow \n");
    }
    else
    {
        arr[++top]=x;
    }
}

void pop()
{
    if(top<0)
    {
        printf("Stack is Underflow\n");
    }
    else
    {
        arr[top--];
    }
}

void disp()
{
    printf("\n Elements are \n");
    for(i=0; i<=top; i++)
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
    disp();
    pop();
    disp();
    return 0;
}
