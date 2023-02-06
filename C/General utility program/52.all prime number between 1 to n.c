#include<stdio.h>
void main()
{
    int n,i,fact,j;
    printf("Enter the number :\n");
    scanf("%d",&n);
    printf("List of prime numbes between 1 to %d: \n",n);
    for(i=1; i<=n; i++)
    {
        fact =0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
            printf("%d\n",i);
    }
}
