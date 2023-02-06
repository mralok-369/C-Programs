// logical AND (&&) operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Checking the below statements\n");
    printf("0 stand for false and 1 stand for True\n");

    a=(2<1)&&(4<3);
    printf("\n (2<1) && (4<3) = %d",a);

     a=(2<1)&&(4>3);
     printf("\n (2<1) && (4>3) = %d",a);

      a=(2>1)&&(4<3);
      printf("\n (2>1) && (4<3) = %d",a);

       a=(2>1)&&(4>3);
       printf("\n (2>1) && (4>3) = %d",a);

       getch();
       return 0;


}
