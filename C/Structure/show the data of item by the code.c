// show the data of item by the code
#include<stdio.h>
#include<conio.h>
struct item
{
    int code;
    char name[20];
    int qty;
};
void main()
{
    struct item itm[10];
    int i,n,icode,flag=0;
    printf("How many Item ?");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
      printf("item#%d\n",i);
      printf("code,name,quantity: ");
      scanf("%d%s%d",&itm[i].code,itm[i].name,&itm[i].qty);
    }
    printf("enter item code for the item you want to view: ");
    scanf("%d",&icode);
    for(i=0; i<n; i++)
    {
        if(itm[i].code==icode)
        {
            flag=1;
            printf("name: %s\tquantity: %d\n",itm[i].name,itm[i].qty);
            break;
        }
    }
    if(flag==0)
    {
        printf("Item not found...");
    }
    getch();
}
