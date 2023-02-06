// delete an element at any position in single linked list
#include<stdio.h>
#include<conio.h>
struct node{
    int data;
    struct node *next;
};

struct node *head;
void insert(int x)  // func for inserting any elements in ll
{
    struct node *link = (struct node*)malloc(sizeof(struct node));
    link->data = x;
    link->next=head;
    head = link;
}

// function for display linked list
void disp()
{
    struct node *prt = head;
    printf("List is : \n");
    while(prt!=NULL)
    {
        printf(" %d",prt->data);
        prt=prt->next;
    }
    printf("\n");
}
// function for del any ele from nth position
void delete(int n)
{
    struct node *temp1=head;
    if(n==1)
    {
        head=temp1->next;
        free(temp1);
    }
    else
    {
        int i;
        for(i=0; i<n-2; i++)
        {
            temp1 = temp1->next;
        }
        struct node *temp2 = temp1->next;
        temp1->next=temp2->next;
        free(temp2);
    }
}

// body of main function
int main()
{
   printf("")
   return 0;
}
