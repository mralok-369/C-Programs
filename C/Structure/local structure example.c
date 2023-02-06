// local structure example
#include<stdio.h>
#include<conio.h>
int main()
{
    struct distance
    {
        int feet;
        float inches;
    }d1;
    struct distance d2;// local declaration

    d1.feet = 23;
    d1.inches = 7.5;

    d2.feet = 14;
    d2.inches = 2.5;

    printf("\n %d'-%f\n",d1.feet,d1.inches);
    printf("\n %d'-%f\n",d2.feet,d2.inches);

    getch();
    return 0;
}

