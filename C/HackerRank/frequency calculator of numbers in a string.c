#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int freq[10]={0},i=0;
    char str[1000];
    gets(str);
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
         ++freq[str[i]-'0'];
        }
        ++i;
    }
    for (int j=0; j<10; ++j)
    {
        printf("frequency of %d is %d\n",j,freq[j]);
    }
    return 0;
}
