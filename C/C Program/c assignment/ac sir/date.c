#include <stdio.h>
int main()
{
    int day, month, year, x;
    printf("Enter any date\n");
    date_again:
    printf("Enter any day(numeric value) : ");
    scanf("%d", &day);
    if (day > 31)
    {
        printf("Invalid day!\n");
        goto date_again;
    }
    printf("\nEnter any year : ");
    scanf("%d", &year);
    month_again:
    printf("\nEnter any month(numeric value) : ");
    scanf("%d", &month);
    printf("\nDated : %d", day);
    if (day != 31)
    {
        x = day % 20;
        switch (x)
        {
        case 1:
            printf("st");
            break;
        case 2:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        default:
            printf("th");
            break;
        }
    }
    else
    {
        printf("st");
    }
    printf(" day of ");
    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("\nInvalid Month!");
        goto month_again;
    }
    printf(" of the year %d", year);
    return 0;
}
