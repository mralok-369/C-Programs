// print student data using structure
#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char name;
};
void main()
{
    struct student s1,s2;
    printf("Enter rollno and name for first student: \n");
    scanf("%d%s",&s1.rollno,s1.name);

    printf("Enter rollno and name for second student: \n");
    scanf("%d%s",&s2.rollno,s2.name);


    printf("Student#1: %d\t%s\n",s1.rollno,s1.name);
    printf("Student#2: %d\t%s\n",s2.rollno,s2.name);

}
