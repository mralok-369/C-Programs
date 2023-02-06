// Find LCM and HCf of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,g,hcf,i,lcm;
   printf(" Enter two numbers: ");
   scanf("%d%d",&a,&b);
   if(a>b)
        g=a;
   else
    g=b;
   for(i=g; i<=(a*b); i++)
   {
       if((i%a==0) && (i%b==0))
       {
           lcm=i;
           break;
       }
   }
   printf("\n the lcm of given number is = %d",lcm);
   hcf=(a*b)/lcm;
   printf("\n the hcf of given number is = %d",hcf);

   getch();
   return 0;

}
