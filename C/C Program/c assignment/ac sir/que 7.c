#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 5
struct Student{
    int id;
    char name[30];
    char gender;
};
typedef struct Student student;
student s1[MAX];
int studentPointer=0;

void insert()
{
    int id;
    char name[30];
    char gender;
     if(studentPointer==MAX)
     {
         printf("Error:Can't insert array is full\n");
         return;
     }
   printf("\nEnter id,name and gender of the student\n");
   scanf("%d %s %c",&id,name,&gender);
   for(int i=0;i<studentPointer;i++)
   {
       if(s1[i].id==id)
       {
           printf("Error:this id already exist\n");
           return;
       }
   }
   s1[studentPointer].id=id;
   strcpy(s1[studentPointer].name,name);
    s1[studentPointer].gender=gender;
    studentPointer++;
    printf("\nitem added sucessfully\n");
}

void search()
{
    bool found=false;
    int id;
    printf("\nEnter id of the student\n");
    scanf("%d",&id);
    for(int i=0;i<studentPointer;i++)
   {
       if(s1[i].id==id)
       {
              found=true;
               printf("Student details:\n id:%d\n Name:%s\n gender:%c\n",s1[i].id,s1[i].name,s1[i].gender);

       }
   }
   if(found==false)
   {
       printf("Error:id is wrong, it does not exist");
   }
}

void print()
{
    printf("Student details:\nid\tName\t\tgender \n");
    for(int i=0;i<studentPointer;i++)
   {

               printf("%d\t%s\t\t%c\n",s1[i].id,s1[i].name,s1[i].gender);


   }
}
int main()
{
    char op;

    do
    {
       printf("select the operation:\ni:insert\ns:search\np:print\nq:quit\n");
       scanf(" %c",&op);

       switch (op)
       {
       case 'i':
        insert();
           break;
       case 's':
        search();
           break;
        case 'p':
        print();
           break;
        case 'q':
        exit(0);
           break;
       }
    } while (op!='q');

    return 0;
}
