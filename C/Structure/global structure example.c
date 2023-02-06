// global structure example
#include<stdio.h>
#include<conio.h>
// global structure
struct Distance
{
    int feet;
    float inches;
};
struct Distance d1; /* global variable */
int main()
{
    struct Distance d2;  /* local variable */
    d1.feet = 23;
    d1.inches = 7.5;

    d2.feet = 14;
    d2.inches = 2.5;

    printf("\n %d'-%f\n",d1.feet,d1.inches);
    printf("\n %d'-%f\n",d2.feet,d2.inches);

    getch();
    return 0;
}
