// malloc() function with string
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[25]="Nils Patel";
    int len = strlen(str);
    char *ps;
    ps=(char*)malloc((len+1)*sizeof(int));
    strcpy(ps,str);
    printf("\n ps = %s",ps);
    free(ps);
    getch();
    return 0;
}
