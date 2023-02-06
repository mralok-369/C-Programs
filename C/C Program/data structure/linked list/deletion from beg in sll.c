#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data =x;
    newnode->next =head;
    head = newnode;
}
void delete()
{
    struct node *temp = head;
    if(temp==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        head=head->next;
        free(temp);
    }
}

void disp()
{
    struct node *prt = head;
    printf("\nList is : \n");
    while(prt!=NULL)
    {
        printf(" %d",prt->data);
        prt = prt->next;
    }
    printf("\n");
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    disp();
    delete();
    disp();
    return 0;
}
