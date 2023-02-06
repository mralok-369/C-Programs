// multiple choise in switch case
#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,n,i,amnt,basic,hra,da,pf,nestal,a,b,c;
    int choice;
    printf("1.Intrest\n");
    printf("2.Nestal");
    printf("\n1.Enter the value of choice:  \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            printf("Enter the value p:\n");
            scanf("%f",&p);
            printf("Enter the value of r:\n");
            scanf("%f",&r);
            printf("Enter the value of n:\n");
            scanf("%f",&n);
            i=p*r*n/100;
            printf("Intrest::%f",i);
            amnt=p+i;
            printf("\n Total Amount:=%f",amnt);
            break;
        }
    case 2:
        {
            printf("Enter the value of basic:\n");
            scanf("%f",&basic);
            printf("Enter the value of a:\n");
            scanf("%f",&a);
            printf("Enter the value of b:\n");
            scanf("%f",&b);
            printf("Enter the value of c:\n");
            scanf("%f",&c);
            hra=basic*a;
            da=basic*b;
            pf=basic*c;
            nestal=basic+hra+da+pf;
            printf("Net Salary:%f",nestal);
            break;
        }
    default:
        {
            printf("Invalid Choice");
        }
    }
    getch();
}
