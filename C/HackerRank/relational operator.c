#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int T;
    scanf("%d",&T);
    int i,arr[1000];
    for(i=0; i<T; i++)
    {
        int A,B;
        scanf("%d %d",&A,&B);
        arr[i]=arr[i];
    }
    for(i=0; i<T*2; i++)
        printf("%d ",arr[i]);
    /*for(i=0; i<T; i++)
    {
        if(A>B)
            printf(">\n");
        else if(A<B)
            printf("<\n");
        else
            printf("=\n");
    }*/
    return 0;
}

