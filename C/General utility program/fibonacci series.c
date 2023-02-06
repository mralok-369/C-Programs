#include<stdio.h>
int main()
{
    int first=0,second=1,next,i,n;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    printf("\n%d %d",first,second);
    for(i=2; i<n; i++)
    {
        next = first+second;
        printf(" %d",next);
        first=second;
        second=next;
    }
    return 0;
}
