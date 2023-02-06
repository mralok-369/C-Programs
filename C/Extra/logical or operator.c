// logical or (||) operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf(" Checking for the OR operator\n");
    printf(" 0=False, 1=True\n");

    a=(2>1)||(4>3);
    printf("\n a=(2>1)||(4>3) = %d",a);

    a=(2>1)||(4<3);
    printf("\n a=(2>1)||(4<3) = %d",a);

    a=(2<1)||(4>3);
    printf("\n a=(2<1)||(4>3) = %d",a);

    a=(2<1)||(4<3);
    printf("\n a=(2<1)||(4<3) = %d",a);

    getch();
    return 0;

}
