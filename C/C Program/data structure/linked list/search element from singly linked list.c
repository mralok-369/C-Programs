// search element from singly linked list
#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
} *head;

void createlist(int n); // function prototype
void displaylist();
int search(int key);

int main()
{
    int n, keytosearch, index;
    printf("Enter number of node to create: ");
    scanf("%d",&n);
    ceatelist(n);
    printf("\nData in list : \n");
    displaylist();
    printf("\nEnter element to search : ");
    scanf("%d",&keytosearch);
    index=search(keytosearch);
    if(index>=0)
    {
        printf("%d found in the list at position%d\n",keytosearch,index+1);
    }
    else
    {
        printf("%d not found in the list.\n",keytosearch);
    }
    return 0;
}

void createlist(int n)
{
    struct node *newnode,*temp;
    int data,i;
    head=malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("Unable to allocate memory. Exiting from app.");
        exit(0);
    }
    printf("Enter data of node 1: ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2; i<=n; i++)
    {
        newnode=malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Unable to allocate memory exiting from app.");
            exit(0);
        }
        printf("Enter data of node %d: ",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}

void displaylist()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("List is empty. \n");
        return 0;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int search(int key)
{
    int index;
    struct node *curnode;
    index = 0;
    curnode = head;
    while(curnode != NULL && curnode->data != key)
    {
        index++;
        curnode = curnode->next;
    }
    return(curnode!=NULL)? index : -1;
}
