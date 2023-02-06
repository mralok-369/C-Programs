// use of realloc function
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
int main()
{
    int *p;
    int i,x,n,s;
    printf("Enter size of dynamic array : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));

    if(!p)
        printf("\nUnable to allocate size\n");
    else
    {
        for(i=0; i<n; i++)
        {
            printf("Enter values : ");
            scanf("%d",(p+i));
        }
        printf("\n Values are: ");
        s=0;
        for(i=0; i<n; i++)
        {
            printf(" %d",*(p+i));
            s+=*(p+i);
        }
        printf("\nSum of elements = %d",s);

        x=n;
        printf("\n Enter new size of dynamic array: ");
        scanf("%d",&n);

        realloc(p,n*sizeof(int));
        if(!p)
        {
            printf("\nUnable to allocate size \n");
            exit(1);
        }
        for(i=x;i<n; i++)
        {
            printf("Enter additional value : ");
            scanf("%d",(p+i));
        }
        printf("\nValues are : ");
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
