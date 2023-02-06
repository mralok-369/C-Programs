// delete elements from end of single linked list
#include<stdio.h>
#include<conio.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert(int x){

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}
void delete(){
    struct node *temp=head;
    struct node *pretemp;
    if(temp==NULL){
        printf("Empty List\n");
    }else{
        while(temp->next!=NULL){
            pretemp=temp;
            temp=temp->next;
        }
        pretemp->next=NULL;
        free(temp);
    }
}
void disp()
{
    struct node *ptr = head;
    printf("List is : \n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    disp();
    delete();
    disp();
    return 0;
}
