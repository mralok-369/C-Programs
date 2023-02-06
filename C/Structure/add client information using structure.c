// add client information using structure
#include<stdio.h>
#include<conio.h>
struct client
{
    int no;
    char name[30];
    char address[80];
    char city[20];
    char state[20];
    int pin[20];
}p[5];
void main()
{
    int i,n,n1;
    printf("Enter the client details: ");
    scanf("%d",&n);
    printf("\n****************************");
    for(i=0; i<=n; i++)
    {
        printf("\n\nEnter the client number: ");
        scanf("%d",&p[i].no);
        printf("\nEnter the client name : ");
        scanf("%s",&p[i].name);
        printf("\nEnter the client address: ");
        scanf("%s",&p[i].address);
        printf("\nEnter the client city: ");
        scanf("%s",&p[i].city);
        printf("\nEnter the client state: ");
        scanf("%s",&p[i].state);
        printf("\nEnter the pin code: ");
        scanf("%s",&p[i].pin);
    }
    printf("\n\n\n\nEnter the no: ");
    scanf("%d",&n1);
    for(i=0; i<=n; i++)
    {
        if(p[i].no==n1)
        {
            printf("\nNo: %d name: %s address: %s\n",p[i].no,p[i].name,p[i].address);
        }
    }
    getch();
}
