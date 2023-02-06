// stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=NULL;

void push(int value)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    temp->data=value;
    temp->link=top;
    top=temp;
}
void pop()
{
    struct node *del=top;
    if(top!=NULL)
    {
        top=top->link;
        free(del);
    }
    else
    {
        printf("stack underfluw\n");
    }
}
 void TOP()
 {
     struct node *t = top;
     printf("Top elements is %d",t->data);
 }
 void disp()
 {
     struct node *head = top;
     printf("Elements are : \n");
     while(head!=NULL)
     {
         printf("%d ",head->data);
         head=head->link;
     }
     printf("\n");
 }

 int main()
 {
     push(10);
     push(20);
     push(30);
     push(40);
     push(50);
     disp();
     pop();
     disp();
     TOP();
     return 0;
 }
