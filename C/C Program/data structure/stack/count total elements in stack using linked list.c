// count total elements in stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

void push(int value)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=top;
    top=temp;
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

 void countnode(){
    struct node *temp=top;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    printf("Total node is : %d",count);
 }

 int main()
 {
     push(10);
     push(20);
     push(30);
     push(40);
     push(50);
     disp();
     countnode();
     return 0;
 }
