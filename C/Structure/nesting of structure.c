// nesting of structure
#include<stdio.h>
#include<conio.h>
struct details
{
    char name[10];
    float price;
};
struct item
{
    int id;
    struct details d;
};
void main()
{
    struct item itm;
    printf("Enter item name id and price: \n");
    scanf("%s%d%f",itm.d.name,&itm.id,&itm.d.price);
    printf("Entered details are : \n");
    printf("Id: %d\nName: %s\nprice: %f",itm.id,itm.d.name,itm.d.price);
    getch();
}
