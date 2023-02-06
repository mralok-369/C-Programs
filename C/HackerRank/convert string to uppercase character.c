#include <stdio.h>
#include <string.h>
int main() {

    int i=0,space=0,lenght;
    char str[100];
    gets(str);
    while(i<=str[i]){
        if(str[i]==' '){
        space++;
        }
        i++;
    }
   for(int j=0; str[j]!='\0'; j++)
    {
        if(str[j]>='a' && str[j]<='z')
        {
            str[j] = str[j] - 32;
        }
    }
    lenght=strlen(str)-space;
    printf("my name is : %s has lenght %d",str,lenght);
    return 0;
}
