// array of structure
#include<stdio.h>
#include<conio.h>
struct book
{
    int id;
    char name[40];
};
void main()
{
    struct book b[10];
    int i,n;
    printf("Enter total no of books: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter name and id of the book %d\n",i+1);
        scanf("%s%d",&b[i].name,&b[i].id);
    }
    for(i=0; i<n; i++)
    {
        printf("\nBook %d: \n",i+1);
        printf("Book id = %d ",b[i].id);
        printf("Book name = %s",b[i].name);
    }
}
