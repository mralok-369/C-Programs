// heap sort
#include<stdio.h>
void main()
{
    int heap[100],size,i,j,pos,root,temp;
    printf("Enter the no of elements : ");
    scanf("%d",&size);
    printf("Enter %d numbers : \n",size);
    for(i=0; i<size; i++)
        scanf("%d",&heap[size]);
    for(i=1 ; i<size; i++)
    {
        pos = i;
        do
        {
            root=(pos-1)/2;
            if(heap[root]<heap[pos])
            {
                temp=heap[root];
                heap[root]=heap[pos];
                heap[pos]=temp;
            }
            pos=root;
        } while(pos!=0);
    }
    printf("Heap array : ");
    for(i=0; i<size; i++)
        printf("%d\t",heap[i]);
    for(j=size-1; j>=0; j--)
    {
        temp = heap[0];
        heap[0] = heap[j];
        heap[j] = temp;
        root = 0;
        do
        {
            pos = 2*root+1;
            if(heap[pos]<heap[pos+1]&&pos<j-1)
                pos++;
            if(heap[root]<heap[pos]&&pos<j)
            {
                temp=heap[root];
                heap[root]=heap[pos];
                heap[pos]=temp;
            }
            root=pos;
        } while(pos<j);
    }
    printf("\n Sorted array is :: ");
    for(i=0; i<size; i++)
        printf("\t%d",heap[i]);
    printf("\n Complexity : \n Best case = Avg case = Worst case = 0(n logn) \n");
}
