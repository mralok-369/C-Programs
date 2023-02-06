// short the item data by code in structure
#include<stdio.h>
#include<conio.h>
struct item{
    int code;
    char name[20];
    int qty;
};
void main()
{
    struct item itm[10],t;
    int n,i,j;
    printf("How many items ?");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("item#%d\n",i);
        printf("code,name,quantity: ");
        scanf("%d%s%d",&itm[i].code,itm[i].name,&itm[i].qty);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(itm[i].code<itm[j].code)
            {
                t=itm[i];
                itm[i]=itm[j];
                itm[j]=t;
            }
        }
    }
    printf("After sorting on code\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\n",itm[i].code,itm[i].name,itm[i].qty);
    }
    getch();
}
