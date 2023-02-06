// count total elements in queue using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *rear;
struct node *front;
// function for enqueue in queue
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
// function for count node
void countnode()
{
    int count=0;
    struct node *temp=front;
    while(temp->link!=NULL)
    {
        count=count+1;
        temp=temp->link;
    }
    printf("Total node is : %d",count+1);
}
// function to display queue
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
// body of main fun from where program execution starts
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    conutnode();
    return 0;
}
