// simple marksheet example
#include<stdio.h>
#include<conio.h>
void main()
{
    int rono;
    char subtopicdefinition[20];
    float math,sci,eng,total,per;
    printf("Enter the roll no:\n");
    scanf("%d",&rono);
    printf("Enter the subtopicdefinition:\n");
    scanf("%s",&subtopicdefinition);
    printf("Enter the math marks:\n");
    scanf("%f",&math);
    printf("Enter the sci marks:\n");
    scanf("%f",&sci);
    printf("enter eng marks:\n");
    scanf("%f",&eng);
    total=math+sci+eng;
    printf("total marks =%f\n",total);
    per=total/3;
    printf("percentage is =%f\n",per);
    if(per<40)
    {
        printf("\n fail");
    }
    else if(per<50&&per>40)
    {
        printf("\n Grade C");
    }
    else if(per<60&&per>50)
    {
        printf("\n Grade B");
    }
    else if(per<70&&per>60)
    {
        printf("\n Grade A");
    }
    else
    {
        printf("\n Dist");
    }
    if(math<35||sci<35||eng<35)
    {
        printf("\n Fail");
    }
    else
    {
        printf("\n Pass");
    }
    getch();
}
