// anonymous structure example
#include<stdio.h>
#include<conio.h>
// struct dist
struct
{
    int feet;
    float inches;
}d1,d2={23,7.5};
int main()
{
    d1.feet = 14;
    d1.inches = 8.5;

    printf("\n d1 : %d\'-%.1f\"",d1.feet,d1.inches);
    printf("\n d2 : %d\'-%.1f\"",d2.feet,d2.inches);
    getch();
    return 0;
}
