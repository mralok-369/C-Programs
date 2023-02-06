// insert an element at any position
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert(int x){
    struct node *link=(struct node*)malloc(sizeof(struct node));
    link->data =x;
    link->next =head;
    head =link;
}
void insert_position(int value,int position)
{
    int count=0;
    struct node *current,*temp;
    current=head;
    while(current!=NULL)
    {
        count++;
        if(count=position-1)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=value;
            temp->next=current->next;
            current->next=temp;
        }
        current=current->next;
    }
}
void disp(){
    struct node *prt = head;
    printf("List is : \n");
    while(prt!=NULL)
    {
        printf("%d\t",prt->data);
        prt=prt->next;
    }
    printf("\n");
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    disp();
    insert_position(1,2);
    insert_position(5,3);
    disp();
    return 0;
}
