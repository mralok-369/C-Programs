#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* concat(char*s1,char*s2)
{
    char* result;
    result=malloc(strlen(s1)+strlen(s2)+1);
    if(!result)
    {
    printf("ERROR!Unable to alloacate memory to result string.");
    exit(0);
    }
    strcpy(result,s1);
    strcat(result,s2);
    return result;
}
int main()
{
   char *s1;
   s1=(char*)malloc(20);
   char *s2;
   s2=(char*)malloc(20);
   printf("Enter string 1\n");
   gets(s1);
   printf("Enter string 2\n");
   gets(s2);
   char *result;
   result=concat(s1,s2);
   puts(result);
}
