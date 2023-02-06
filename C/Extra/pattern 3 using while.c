//printing pattern using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   i=1;
   while(i<=9)
   {
       j=1;
       while(j<=i)
       {
           printf(" %d",j);
           j++;
       }
       printf("\n");
       i++;
   }
   getch();
}
