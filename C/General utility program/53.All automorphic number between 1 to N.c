// 53.All automorphic number between 1 to N
#include<stdio.h>
int main()
{
    int n,r,t,equal,i,cn,num;
    long int sq;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("list of automorphic number between 1 to %d :\n",n);
    printf("Number : square\n");
    for(i=1; i<=n; i++)
    {
        cn =i;
        num =i;
        sq = cn*cn;
        t=10;
        equal = 0;
        while(cn>0)
        {
            r = sq%t;
            if(num==r)
            {
                equal = 1;
                break;
            }
            cn = cn/10;
            t=t*10;
        }
        if(equal==1)
        {
            printf("%5d : %ld\n",num,sq);
        }
    }
    return 0;
}
