// program to read the value from 1-12 and print name of the month and next month
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char month[12][20]={"January","February","March","Aprail","May","June","July","August","September","October","November","December"};
    int i;
    printf("Enter the month value : ");
    scanf("%d",&i);

    if(i<1 || i>12)
    {
        printf("Incorrect value!!\n Press any key to terminate the program...");
        getch();
        exit(0);
    }
    if(i!=12)
        printf("%s followed by %s",month[i-1],month[i]);
    else
        printf("%s followed by %s",month[i-1],month[0]);
    getch();
}
