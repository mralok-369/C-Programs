// malloc() function with array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i;
    p=(int*)malloc(5*sizeof(int));
    for(i=0; i<5; i++)
    {
        printf("Enter values : ");
        scanf("%d",(p+i));
    }
    printf("\nValues are : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    getch();
    return 0;
}
