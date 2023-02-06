// concatenation of strings
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k;
    char first[10];
    char second[10];
    char third[10];
    gets(first);
    gets(second);
    gets(third);
    char name[30];
    for(i=0; first[i]!='\0'; i++)
        name[i]=first[i];
        name[i]=' ';
    for(j=0; second[j]!='\0'; j++)
        name[i+j+1]=second[j];
        name[i+j+1]=' ';
    for(k=0; third[k]!='\0'; k++)
        name[i+j+k+2]=third[k];
        name[i+j+k+2]='\0';
    printf("\n");
    printf("%s\n",name);
}
