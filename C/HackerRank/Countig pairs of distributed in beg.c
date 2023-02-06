#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,beg,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&beg);
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j])%beg==0)
                count++;
        }
    }
    printf("%d",count);
}
