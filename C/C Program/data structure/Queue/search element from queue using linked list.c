// search element from queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *rear;
struct node *front;

void enqueue(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=NULL;
    if(rear==NULL)
    {
        rear=newnode;
        front=newnode;
    }
    else
    {
        rear->link=newnode;
        rear=newnode;
    }
}

void search( int no)
{
    struct node *temp=front;
    int value=0;
    while(temp!=NULL)
    {
        if(temp->data==no)
        {
            value=value+1;
        }
        temp=temp->link;
    }
    if(value==1)
    {
        printf("found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    search(30);
    return 0;
}
