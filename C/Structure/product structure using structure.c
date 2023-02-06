// product structure using structure
#include<stdio.h>
#include<conio.h>
struct product
{
    int id;
    char name[20];
    int piece;
    int price;
    int total[5];
}p[5];
void main()
{
    int total[5],i,n;
    int n1;
    printf("Enter the product information ");
    printf("\n******************************");
    printf("\n\nEnter the number of products: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        total[i]=0;
        printf("\nEnter the product ID: ");
        scanf("%d",&p[i].id);
        printf("\nEnter the product name: ");
        scanf("%s",&p[i].name);
        printf("\nEnter th product pieces: ");
        scanf("%d",&p[i].piece);
        printf("\nEnter the product price: ");
        scanf("%d",&p[i].price);
        total[i]=p[i].piece*p[i].price;
        printf("\n\n\ttota;:: %d",total[i]);
    }
    printf("\nEnter product id which you want to see: ");
    scanf("%d",&n1);
    for(i=0; i<n; i++)
    {
        if(p[i].id==n1)
        {
            printf("\nProduct ID: %d name: %s Total piece: %d price: %d\n",p[i].id,p[i].name,p[i].piece,p[i].total);
        }
    }
    getch();
}
