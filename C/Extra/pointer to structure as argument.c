//pointer to structure as argument
// program to read information of a book and display the information
#include<stdio.h>
struct book
{
    int bno;
    char subTopcDefinition[40];
};
void display(struct book*);
void main()
{
    struct book b;
    printf("\nEnter book no: ");
    scanf("%d",&b.bno);
    printf("Enter book subTopicDefination: ");
    scanf("%s",b->subTopicDefinition);
    display(&b);
}
void display(struct book *b)
{
    printf("\nDetails are : ");
    printf("Book number=%d \n",b->bno);
    printf("Book subTopicDefinition = %s",b->subTopicDefinition);
}
