//implement queue using stacks
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// functions prototype
 void push1(int);
 void push2(int);
 int pop1();
 int pop2();
 void enqueue();
 void dequeue();
 void display();
 void create();
 // global declaration of variables
 int st1[100],st2[100];
 int top1=-1, top2=-1;
 int count=0;
 // main function body
 void main()
 {
     int ch;
     printf("\n 1-Enqueue element into queue.");
     printf("\n 2-Dequeue element from queue.");
     printf("\n 3-Display from queue.");
     printf("\n 4-Exit.");
     create();
     while(1)
     {
         printf("\nEnter choice : ");
         scanf("%d",&ch);
         switch(ch)
         {
         case 1:
            enqueue();
            break;
         case 2:
            dequeue();
            break;
         case 3:
            display();
            break;
         case 4:
            exit(0);
            break;
         default:
            printf("Wrong choice");
         }
     }
 }

 void create()
 {
     top1=top2=-1;
 }

 void push1(int data)
 {
     st1[++top1]=data;
 }
 int pop1()
 {
     return(st1[top1--]);
 }
 void push2(int data)
 {
     st2[++top2]=data;
 }
 int pop2()
 {
     return(st2[top2--]);
 }

 void enqueue()
 {
     int data,i;
     printf("Enter data into queue : ");
     scanf("%d",&data);
     push1(data);
     count++;
 }
 void dequeue()
 {
     int i;
     for(i=0; i<=count; i++)
     {
         push2(pop1());
     }
     pop2();
     count--;
     for(i=0; i<=count; i++)
     {
         push1(pop2());
     }
     printf("Item is deleted from queue");
 }
 void display()
 {
     int i;
     for(i=0; i<=top1; i++)
     {
         printf(" %d ",st1[i]);
     }
 }
