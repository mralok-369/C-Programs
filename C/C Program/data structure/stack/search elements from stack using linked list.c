// search elements from stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top;

void push(int x){
    if(top==NULL){
        struct node *temp1=(struct node*)malloc(sizeof(struct node));
        temp1->data=x;
        temp1->link=NULL;
        top=temp1;
    }else{
        struct node *temp2=(struct node*)malloc(sizeof(struct node));
        temp2->data=x;
        temp2->link=top;
        top=temp2;
    }
}
void search(int x){
    struct node *temp=top;
    int value=0;
    while(temp!=NULL){
        if(temp->data==x){
            value = value+1;
        }
        temp=temp->link;
    }
    if(value==1){
        printf("Found\n");
    }else{
        printf("not found\n");
    }
}
void disp()
 {
     struct node *temp = top;
     printf("Elements are : \n");
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->link;
     }
 }

 int main()
 {
     push(10);
     push(20);
     push(30);
     push(40);
     disp();
     search(30);
     return 0;
 }
