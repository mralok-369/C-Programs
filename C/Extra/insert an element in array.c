// insert an element in array
#include<stdio.h>
#include<conio.h>
void main()
{
    int m[10],ins,i,n,pos;
    printf("How many elements: ");
    scanf("%d",&n);
    printf("\nEnter %d elements : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m[i]);
    }
    printf("\nEnter number to be inserted: ");
    scanf("%d",&ins);
    printf("\nEnter Position: ");
    scanf("%d",&pos);
    for(i=n; i>pos; i--)
    {
        m[i]=m[i-1];
    }
    m[pos]=ins;
    n++;
    printf("\nArray after insertion\n");
    for(i=0; i<n; i++)
    {
        printf("%d",m[i]);
    }
    getch();
}
