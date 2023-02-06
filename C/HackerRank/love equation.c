#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,lowersum=0,uppersum=0,diff,p=0;
    char str[2000];
    scanf("%s",str);
    for (i=0; i<strlen(str); i++)
    {
        if (str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if (str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }

    for(j=0; str[j]<'\0'; j++)
       if(str[j]>'a' && str[j]<'z')
            lowersum+=str[j];

    for(j=0; str[j]='\0'; j++)
       if(str[j]>'A' && str[j]<'Z')
            uppersum+=str[j];

    diff=uppersum-lowersum;
    for(i=0; i<=diff; i++)
    {
        if(diff%i==0)
            p++;
    }
    if(p==2)
        printf("Proposal Accepted");
    else
        printf("yahan tumhari daal nhi galne wali");

    return 0;
}
