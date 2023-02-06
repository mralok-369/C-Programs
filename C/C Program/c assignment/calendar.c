#include<stdio.h>
#include<string.h>
void main()
{
    int days,stday,i,j=0;
    char dayname[][7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    do{
    printf("Input no. of Days in Months");
    scanf("%d",&days);
    printf("\nInput starting Days(Sun-1 ..Sat-7)");
    scanf("%d",&stday);
    }while(days>31||days<28||stday>7||stday<1);
    for(i=0;i<7;i++)
    {
        printf("%s\t",dayname[i]);
    }
    printf("\n");
    for(i=1;i<stday;i++)
    {
        printf(" \t");
        j++;
    }
    for(i=1;i<=days;i++)
    {
        printf("%d\t",i);
        j++;
        if(j==7)
        {
            printf("\n");
            j=0;
        }
    }

}
