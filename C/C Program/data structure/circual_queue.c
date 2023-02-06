//circular array implementaion Queue
#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int capacity;
	int size;
	int *array;
	int front,rear;
};

//create an queue
struct queue *createQueue(int capacity)
{
	struct queue *q=malloc(capacity*sizeof(struct queue));
	if(!q)
	return NULL;

	q->capacity=capacity;
	q->front=q->rear=-1;
	q->size=0;
	q->array=malloc(capacity*sizeof(int));
	if(!q->array)
	NULL;
	return q;
}
int isFull(struct queue *q)
{
	if(q->size==q->capacity)
	return 0;

	return 1;
}
int isEmpty(struct queue *q)
{
	return (q->size==0);
}
void enQueue(struct queue *q,int val)
{
	if(!isFull(q)){
		printf("Queue is full\n");
	}
	else{

	q->rear=(q->rear+1)%q->capacity;
	q->array[q->rear]=val;
	if(q->front==-1)
	q->front=q->rear;
	q->size+=1;
	}
}
int rearElement(struct queue *q )
{
 	return q->array[q->rear];
}
int frontElement(struct queue *q )
{
 	return q->array[q->front];
}

int deQueue(struct queue *q)
{
	int data = INT_MIN;
	if(isEmpty(q))
	{
		printf("Queue is Empty\n");
		return data;
	}
	data=q->array[q->front];
	if(q->front==q->rear)
	{
		q->front=q->rear=-1;
		q->size=0;
	}
	else
	{
		q->front=(q->front+1)%q->capacity;
		q->size+=1;
	}
	return data;
}

int main()
{
 struct queue *Q;
 Q=createQueue(5);

 enQueue(Q,8);
 enQueue(Q,9);
 enQueue(Q,10);
 enQueue(Q,11);
 enQueue(Q,12);
 enQueue(Q,13);

 printf("Front element %d \n",frontElement(Q));
 printf("Rear  element %d \n",rearElement(Q));

 printf("Deleted element %d \n",deQueue(Q));
 return 0;
}
