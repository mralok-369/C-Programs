// Example of student tabular format
#include<stdio.h>
#include<conio.h>
struct studentResult
{
    int no;
    char name[20];
    int sub[3];
    int total;
}std[3];
void main()
{
    int i,j,k,l;
    for(i=0; i<3; i++)
    {
        printf("Enter the data for student [%d]: ",i);
        printf("\nEnter no : ");
        scanf("%d",&std[i].no);
        printf("\nEnter name : ");
        scanf("%s",&std[i].name);
        printf("\nEnter subjects marks : ");
        for(j=0; j<3; j++)
        {
            printf("\n\tSubject[%d] : ",j);
            scanf("%d",&std[i].sub[j]);
        }
        for(k=0; k<3; k++)
        {
            std[k].total = 0;
            for(l=0; l<3; l++)
            {
                std[k].total = std[k].total+std[k].sub[l];
            }
        }
    }
    printf("\n\n\tSTUDENT TABULAR FORMAT");
    printf("\n\t---------------------");
    printf("\n\tNo \tName\tTotal");
    for(i=0; i<3; i++)
    {
        printf("\n\n\t%d\t%s\t%d",std[i].no,std[i].name,std[i].total);
    }
    getch();
}
