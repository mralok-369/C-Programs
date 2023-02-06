// Delete any value of singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;

void insert(int x)
{
    struct node *link = (struct node*)malloc(sizeof(struct node));
    link->data=x;
    link->next=head;
    head=link;
}

void deleteanyvalue(int x)
{
    struct node* temp=head;
    if(head==NULL)
    {
        printf("No record to delete");
    }
    else if(temp->data==x)
    {
        head=temp->next;
        free(temp);
    }
    else
    {
        struct node* temp2=NULL;
        temp2=temp->next;
        while(temp->next->data!=x)
        {
            temp=temp->next;
            temp2=temp->next;
        }
        temp->next=temp2->next;
        free(temp2);
    }
}

void disp()
{
    struct node *prt = head;
    printf("List is : \n");
    while(prt!=NULL)
    {
        printf("%d\t",prt->data);
        prt = prt->next;
    }
    printf("\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    disp();
    deleteanyvalue(30);
    disp();
    return 0;
}
