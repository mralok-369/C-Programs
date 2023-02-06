#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int M;
    scanf("%d\n",&M);
    int p,q,A[p],X[q],i,j;
    scanf("%d\n",&p);
    for(i=0; i<p; i++)
        scanf("%d ",&A[i]);
    scanf("\n%d",&q);
    for(j=0; j<q; j++)
        scanf("\n%d ",&X[j]);
    for(j=0; j<q; j++)
    {
        for(i=0; i<p; i++)
        {
           printf("%d ",(X[j]+A[i])%M);
        }

    }
    return 0;
}

