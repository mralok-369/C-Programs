// count total node in singly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;

void insert(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void countnode()
{
    struct node *temp=head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("Total node is : %d",count);
}

int main()
{
    head=NULL;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    countnode();
    return 0;
}
