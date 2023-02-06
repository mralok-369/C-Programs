// calloc function with dynamic array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    int *p;
    int i,n,s;

    printf("Enter no of terms : ");
    scanf("%d",&n);
    p= (int*)calloc(n,sizeof(int));
    if(!p)
        printf("\nUnable to allocate size\n");
    else
    {
        for(i=0; i<n; i++)
        {
            printf("\nEnter values : ");
            scanf("%d",(p+i));
        }
        printf("Values are : ");
        s=0;
        for(i=0; i<n; i++)
        {
            printf(" %d",*(p+i));
            s+=*(p+i);
        }
        printf("\n Sum of elements = %d",s);
    }
    free(p);
    getch();
    return 0;
}
