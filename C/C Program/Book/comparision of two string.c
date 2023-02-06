// comparision of two string
#include<stdio.h>
void main()
{
    int i=0;
    char str1[10],str2[10];
    printf("Enter two strings which you want to compared \n");
    scanf("%s %s",str1,str2);
    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
        i=i+1;
    if(str1[i]=='\0' && str2[i]=='\0')
        printf("strings are equal\n");
    else
        printf("strings are not equal\n");
}
