// program to read two string compare join and copy and find their lenghts
#include<stdio.h>
void main()
{
    char s1[20], s2[20], s3[20];
    int x,len1,len2,len3;
    printf("Enter two string constants \n");
    scanf("%s %s",s1,s2);
    x=strcmp(s1,s2);
    if(x!=0)
    {
        printf("\n strings are not equal\n");
        strcat(s1,s2);
    }
    else
        printf("\nstrings are equal\n");
    strcpy(s3,s1);
    len1=strlen(s1);
    len2=strlen(s2);
    len3=strlen(s3);
    printf("\ns1 = %s\t length = %d characters\n",s1,len1);
    printf("\ns2 = %s\t length = %d characters\n",s2,len2);
    printf("\ns3 = %s\t length = %d characters\n",s3,len3);
}

