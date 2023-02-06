// singly linked list insertion
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert(int x){
    struct node *link=(struct node*)malloc(sizeof(struct node));
    link->data=x;
    link->next=head;
    head=link;
}
void disp(){
    struct node *prt=head;
    printf("List is: \n");
    while(prt!=NULL){
        printf(" %d",prt->data);
        prt=prt->next;
    }
    printf("\n");
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    disp();
    return 0;
}
