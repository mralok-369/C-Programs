// use of switch case to design menu
#include<stdio.h>
void main()
{
    int character;
    printf("Travel guide\n\n");
    printf("A Air timings\n");
    printf("T Train timings\n");
    printf("B Bus services\n");
    printf("X to skip\n");
    printf("Enter your choice\n");
    character=getchar();
    switch(character)
    {
    case 'A':
        air-display();
        break;
    case 'B':
        bus-display();
        break;
    case 'T':
        train-display();
        break;
    default:
        printf("Wrong choice");
    }
}


