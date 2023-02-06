#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    char ch;
    scanf("%c",ch);
    for(i=0; i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                printf("%c ",ch);
            }
            else
            {
                printf("%c",ch+1);
            }
            printf("\n");
        }
    }
}
