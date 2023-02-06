// insert a node at any position between beg and end of the doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
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
void insert_position(int value,int position)
{
    int count=0;
    struct node *current,*temp;
    current=head;
    while(current!=NULL)
    {
        count++;
        if(count==position-1)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=value;
            temp->next=current->next;
            current->next=temp;
            temp->prev=current;
            temp->next->prev=temp;
        }
        current=current->next;
    }
}

void disp()
{
    struct node *temp = head;
    printf("Elements are : \n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    head=NULL;
    insertathead(10);
    insertathead(20);
    insertathead(30);
    insertathead(40);
    disp();
    insert_position(35,2);
    insert_position(15,5);
    disp();
    return 0;
}
