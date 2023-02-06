#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
		
}*head=NULL,*tail;

void insert()
{
	struct node *newnode;
	int i;
	for(i=0;i<5;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
		}
		
		
		
	}
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
}
void revers_print(struct node* temp)
{
	if(temp==NULL)
	return ;
	else
	{		
		revers_print(temp->next);
		printf("%d ->",temp->data);
	}
}

void reverr_linked()
{
	/*
	struct node *temp=head,*temp1,*var=NULL;
	while(current!=NULL)
	{
		temp1=var;
		var=temp;
		temp=temp->next
	}
	*/
	struct node *temp1,*var,*temp;
    temp=head;
    var=NULL;
    while(temp!=NULL)
    {
        temp1=var;
        var=temp;
        temp=temp->next;
        var->next=temp1;
    }
    head=var;

} 

int main()
{
	
	insert();
	display();
	printf("\n");
	revers_print(head);
	printf("\n");
	reverr_linked();
	display();
	return 0;
}

