// copying one string into another and count the number of characters
#include<stdio.h>
void main()
{
    char string1[80],string2[80];
    int i;
    printf("Enter a string \n");
    scanf("%s",string2);
    for(i=0; string2[i]!='\0'; i++)
        string1[i]=string2[i];
    string1[i]='\0';
    printf("\n");
    printf("%s\n",string1);
    printf("Number of character = %d\n",i);
}
