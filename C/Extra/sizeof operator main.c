//sizeof operator
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("the size of an int is:\t\t" );
    printf("%d bytes.\n",sizeof(int) );

    printf("the size of a short int is:\t" );
    printf("%d bytes.\n",sizeof(short) );

    printf("the size of a long int is:\t" );
    printf("%d bytes.\n",sizeof(long) );

    printf("the size of a char is:\t\t" );
    printf("%d bytes.\n",sizeof(char) );

    printf("the size of a float is:\t\t" );
    printf("%d bytes.\n",sizeof(float) );

    printf("the size of a double:\t\t" );
    printf("%d bytes.\n",sizeof(double) );

    getch();
    return 0;

}
