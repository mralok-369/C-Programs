#include<stdio.h>
#include<conio.h>
void main()
{
    int math,hindi,eng,avg;
    printf("Enter marks in math: ");
    scanf("%d",&math);
    printf("\nEnter marks in Hindi : ");
    scanf("%d",&hindi);
    printf("\nEnter marks in english: ");
    scanf("%d",&eng);
    avg=(math+hindi+eng)/3;
    printf("Grade of the student is : ");
    if(avg>79)
        printf("Honours");
    else if(avg>59)
        printf("First division");
    else if(avg>49)
        printf("Second division");
    else if(avg>39)
        printf("Third division");
    else
        printf("Fail");
    getch();

}
