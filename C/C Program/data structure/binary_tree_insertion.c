#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *lc;
	int data;
	struct node *rc;
	
};
void display_inorder(struct node* root)
{
	if(root)
	{
		display_inorder(root->lc);
		printf("%d ",root->data);
		display_inorder(root->rc);
	}
}
void display_postorder(struct node* root)
{
	if(root)
	{
		
		display_postorder(root->lc);
		
		display_postorder(root->rc);
		printf("%d ",root->data);
	}
}
void display_preorder(struct node* root)
{
	if(root)
	{
		printf("%d ",root->data);
		display_preorder(root->lc);
		
		display_preorder(root->rc);
	}
}
struct node *insert(struct node *root,int d)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=d;
	newnode->lc=NULL;
	newnode->rc=NULL; 
	if(root==NULL)
	{
		root=newnode;
	}
	else 
	{
		if(d<root->data)
		root->lc=insert(root->lc,d);
		else if(d>root->data)
		root->rc=insert(root->rc,d);
	}
	return root;
}

int main()
{
	//Q. Insert data in Binary tree 5,6,8,2,1,4,3,9,10,11 
    
    struct node *root=NULL;
    char ch='y';
    int i,val;
    printf("Enter 10 value\n");
    for(i=0;i<10;i++)
    {
    	printf("Enter the value: ");
    	scanf("%d",&val);
    	root=insert(root,val);
	}
	printf("\nInorder travarsel: ")	;
	
	display_inorder(root);
	printf("\npostorder travarsel: ")	;
	
	display_postorder(root);
	printf("\npreorder travarsel: ")	;
	
	display_preorder(root);
	
	
	return 0;
}
