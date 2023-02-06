//nested switch case example
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int choice,ch1,ch2;
    printf("\n1.pen \n2.fruits");
    printf("\n Enter value of choice: \n");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:
        {
            printf("\n1.micro: \n2.renold: \n3.cello:");
            printf("\n Enter the value of ch1: \n");
            scanf("%d",&ch1);
            switch(ch1)
        {
        case 1:
            {
                printf("\n micro");
                break;
            }
        case 2:
            {
                printf("\n renold");
                break;
            }
        case 3:
            {
                printf("\n cello");
                break;
            }
        default:
            {
                printf("Invalid Choice");
            }
        }
        break;

    }
        case 2:
            {
                printf("\n 1.Mango \n2.Orange \n3.Pineaple");
                printf("\nEnter the value of ch2: \n");
                scanf("%d",&ch2);
                switch(ch2)
                {
                case 1:
                    {
                        printf("\n Mango");
                        break;
                    }
                case 2:
                    {
                        printf("\n Orange");
                        break;
                    }
                case 3:
                    {
                        printf("\n Pineaple");
                        break;
                    }
                default:
                    {
                        printf("Invalid Choice");
                    }
                }
                break;
            }
                default:
                    {
                        printf("Invalid choice");
                    }
    }
                    getch();

}
