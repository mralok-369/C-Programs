// print n number of student data using structure
#include<stdio.h>
#include<conio.h>
struct student{
    int rollno;
    char name[20];
};
void main()
{
    struct student s[10];
    int i,n;
    printf("how many students ?");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("student#%d: rollno and name ?\n",i);
        scanf("%d%s",&s[i].rollno,s[i].name);
    }
    printf("you have entered \n");
    for(i=0; i<n; i++)
    {
        printf("student#%d: rollno: %d name: %s\n",i,s[i].rollno,s[i].name);
    }
    getch();
}
