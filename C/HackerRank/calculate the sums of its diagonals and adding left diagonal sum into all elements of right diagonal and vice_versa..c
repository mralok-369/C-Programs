#include <stdio.h>
void main ()
{

    int i,j,m,n,leftsum=0,rightsum=0;
    scanf("%d",&m);
    n=m;
    int arr[m][n];
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++)
	 {
        m=m-1;
	   for(j=0;j<n;j++)
            {
              if (j==m)
                {
                  leftsum+arr[i][j];
                }
            }
	 }
	 for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
			   if (i==j)
                rightsum+=arr[i][j];
            }
        }

    /*for(i=0; i<m; i++)
    {
        arr[i][i]+=leftsum;
        arr[i][m-i-1]+=rightsum;
    }
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    printf("%d",leftsum);
    printf("%d",rightsum);
}
