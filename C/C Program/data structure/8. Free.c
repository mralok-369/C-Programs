#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char *str;
    str = (char*)malloc(15);
    strcpy(str,"helpdeskdeveloper");
    printf("String = %s,\n Address = %p\n",str,str);
    str = (char*)realloc(str,25);
    strcat(str,".com");
    printf("string = %s,\n Address = %p\n",str,str);
    free(str);
    return 0;
}
