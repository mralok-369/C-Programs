#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j;
    scanf("%d",&n);
    int areacode[n];
    for(i=0; i<n; i++)
     scanf("%d",&areacode[i]);
    for(j=0; j<n; j++)
    {
        if(areacode[j]%2==0)
            printf("your mee\\ti\\ng requ\\est is ap\\proved\n");
    }
    return 0;
}
