// search element from queue using array
#include<stdio.h>
#include<stdlib.h>
int arr[10],i,f=0,r=0;

void push(int x)
{
    if(r==4)
    {
        printf("Queue is overflow\n");
    }
    else
    {
        arr[r++]=x;
    }
}

void search(int no)
{
    int count = 0;
    for(i=f; i<r; i++)
    {
        if(arr[i]==no)
        {
            count = count+1;
        }
    }
    if(count==1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}

void display()
{
    printf("Elements are\n");
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
    display();
    search(20);
    return 0;
}
