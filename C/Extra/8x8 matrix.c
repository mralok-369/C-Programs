#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[8][8],i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(arr[i][j]==((i+j)%2))
                printf(" B");
            if(arr[i][j]!=((i+j)%2))
                printf(" R");
        }
        printf("\n");
    }
    getch();
    return 0;
}

