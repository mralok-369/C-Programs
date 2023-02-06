//delete elem from end of doubly linked list
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
void delete()
{
    struct node *temp=head;
    struct node *pretemp;
    if(temp==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            pretemp=temp;
            temp=temp->next;
        }
        pretemp->next=NULL;
        free(temp);
    }
    printf("\n");
}

void disp()
{
     struct node *temp=head;
     printf("Elements are : \n");
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
    delete();
    disp();
    return 0;
}
