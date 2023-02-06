// queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *rear;
struct node  *front;

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

void dequeue()
{
    if(front==NULL)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        struct node *temp=front;
        front=front->link;
        free(temp);
    }
}

void display()
{
    if(front == NULL)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        struct node *temp = front;
        printf("Elements are \n");
        while(temp->link!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
        printf("%d\n",temp->data);
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printf("Queue is : \n");
    display();
    printf("Queue after dequeue : \n");
    dequeue();
    display();
    return 0;
}
