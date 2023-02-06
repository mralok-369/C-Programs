// reverse doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
struct node *getnewnode(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
};
void insertathead(int x)
{
    struct node *newnode=getnewnode(x);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
}

void reverse()
{
    struct node *temp=head;
    while(temp->next!=NULL)
       {
            temp=temp->next;
       }
       printf("\nReverse Elements are \n");
       while(temp!=NULL)
       {
           printf("%d\t",temp->data);
           temp=temp->prev;
       }
}

void disp()
{
     struct node *temp=head;
     printf("\nElements are : \n");
     while(temp!=NULL)
     {
        printf("%d\t",temp->data);
        temp=temp->next;
     }
}

int main()
{
    head = NULL;
    insertathead(10);
    insertathead(20);
    insertathead(30);
    insertathead(40);
    disp();
    reverse();
    return 0;
}

