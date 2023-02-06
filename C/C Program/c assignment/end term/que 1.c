#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
struct node *createNode();
void insertAtlast();
void createlist();
void deleteInt();
void createlist()
{
    char response;
    printf("Please create the list\n");
    do
    {
        insertAtlast();
        printf("For Inserting : Enter y , n for No\n");
        scanf(" %c", &response);
    } while (response == 'y');
}
void deleteInt()
{
    int item;
    struct node* current=head;
    struct node* previous=head;
    printf("\nPlease enter the integer to be deleted\n");
    scanf("%d", &item);
     if (head == NULL)
    {
        printf("linked list is empty\n");
    }
    else if (head->data==item)
    {
        head=head->next;
        free(current);
        printf("\nItem deleted successfully\n");
        return;
    }
    else
    {
        while(current!=NULL)
        {
            if(current->data==item)
            {
                break;
            }
            previous=current;
            current=current->next;
        }
        if(current==NULL)
        {
            printf("Item can't be deleted because it does not exist in the list\n");
            return;
        }
        else
        {
            previous->next=current->next;
            free(current);
            printf("\nItem deleted successfully\n");
        }
    }
}
// creating the list
struct node *createNode()
{
    int value;
    struct node *newNode;
    printf("Enter the value\n");
    scanf("%d", &value);
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
// function to insert an element
void insertAtlast()
{
    struct node *temp = createNode();
    struct node *temp1;
    if (head == NULL)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}
// function to display the list
void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("Nothing  to display\n");
    }
    else
    {
        printf("\nThe list is:\n");
        temp = head;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
// body of main function
int main()
{
    head = NULL;
    createlist();
    printf("Before Deletion:\n");
    display();
    deleteInt();
    printf("After Deletion:\n");
    display();
    return 0;
}
