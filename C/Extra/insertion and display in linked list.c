// insertion and display a linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//#include<alloc.h>
struct node
{
    char *name;
    int age;
    int salary;
    struct node*next;
};
void append(struct node**q,char*name,int age,int salary)
{
    struct node *temp,*r;
    int i;
    if(*q==NULL)
    {
        temp=malloc(sizeof(struct node*));

        temp->name=name;
        temp->age=age;
        temp->salary=salary;
        temp->next=NULL;
        *q=temp;
    }
    else
    {
        temp=*q;
        while(temp->next!=NULL)
            temp=temp->next;

        r->name=name;
        r->age=age;
        r->salary=salary;
        r->next=NULL;
        temp->next;
    }
};
void display(struct node*q)
{
    printf("\n");
    while(q!=NULL)
    {
        printf("name : %20s",q->name);
        printf("|age : %d",q->age);
        printf("|salary : %d\n",q->salary);
        q=q->next;
    }
}
int main()
{
    struct node*p;
    p=NULL;
    append(&p,"Alok Kumar",18,50000);
    append(&p,"Upendra kumar",24,50000);
    display(p);

    return 0;
}
