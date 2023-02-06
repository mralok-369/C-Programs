//pointer to structure
// a pointer which is pointing to a structure is know as pointer to structure
#include<stdio.h>
struct book{
    char *subTopicDefinition;
    char author[10];
    int id;
}bk={"C Programming Example","Nils and Team",23};
void main()
{
    struct book *b=&bk;
    printf("Name: %s, Author: %s, Id: %d",b->subTopicDefinition,(*b).author,b->id);
}
