
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

void display(struct node** p)
{
	struct node* temp;
	temp=(*p);
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

void InAtEnd(struct node** tail)
{
	int val;
	struct node *newnode;
	printf("****************************************************\n");
	printf("Enter any number to add at end of queue\n");
	printf("Enter the value  : ");
		scanf("%d",&val);
	  	newnode=(struct node*)malloc(sizeof(struct node));
	  	newnode->data=val;
	  	newnode->next=NULL;
	  	newnode->prev=(*tail);
	  	(*tail)->next=newnode;
	  	(*tail)=newnode;
}
void InAtFirst(struct node** head)
{
	int val;
	struct node *newnode;
	printf("****************************************************\n");
	printf("Enter any number to add at Begining of queue\n");
	printf("Enter the value  : ");
		scanf("%d",&val);
	  	newnode=(struct node*)malloc(sizeof(struct node));
	  	newnode->data=val;  
	  	newnode->prev=NULL;
	  	newnode->next=(*head);
	  	(*head)->prev=newnode;
	  	(*head)=newnode;
}
void InAtPosition(struct node** head)
{
	int val,p=0;
	struct node *newnode,*temp;
	printf("****************************************************\n");
	printf("Enter any number to add between of queue\n");
	printf("Enter Position\n");
	scanf("%d",&p);
	    printf("Enter the value  : ");
		scanf("%d",&val);
		temp=(*head);
		while(p>2)
		{
			temp=temp->next;
			p--;
		}
	  	newnode=(struct node*)malloc(sizeof(struct node));
	  	newnode->data=val;
	  	newnode->prev=temp;
	  	newnode->next=temp->next;
	  	temp->next->prev=newnode;
	  	temp->next=newnode;
}

void deletionAtFirst(struct node** head)
{
	struct node *newnode,*temp;
	printf("****************************************************\n");
	//printf("\n");
	temp=(*head);
	(*head)=(*head)->next;
	(*head)->prev=NULL;
	free(temp);
}
void deletionAtEnd(struct node** tail)
{
	struct node *newnode,*temp;
	printf("****************************************************\n");
	temp=(*tail);
	(*tail)=(temp)->prev;
	(*tail)->next=NULL;
	free(temp);
	
}
int main()
{
	struct node *newnode,*head=NULL,*temp,*tail;
	char ch='y';
	int val=0,p=0;
	do
	{
		printf("Enter the value: ");
		scanf("%d",&val);
	  	newnode=(struct node*)malloc(sizeof(struct node));
	  	newnode->data=val;
	  	newnode->next=NULL;
	  	newnode->prev=NULL;
	  	if(head==NULL)
		{
	  		head=newnode;
	  		tail=newnode;
	  	}
	  	else
	  	{
	  	 newnode->prev=tail;
		 tail->next=newnode;
		 tail=newnode;  	
		}
		printf("Do you want to continue y/n :");
		fflush(stdin);
		scanf("%c",&ch);
		
	}while(ch=='y');
	display(&head);
	InAtEnd(&tail);  
    printf("After insertion\n");
    display(&head);
	
	InAtFirst(&head);
	
	printf("After insertion\n");
    display(&head);
	InAtPosition(&head);
	printf("After insertion\n");
    display(&head);
    
    deletionAtFirst(&head);
    printf("After deletion at first\n");
    display(&head);
	//deletionAtFirst(&head);
    //printf("After deletion at first\n");
    //display(&head);
	
	deletionAtEnd(&tail);
	printf("After deletion at end\n");
    display(&head); 	
	
	return 0;
}
