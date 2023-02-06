// print digonal elements of a square matrix
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the number of rows: \n");
    scanf("%d",&m);
    printf("Enter the numbers of columns: \n");
    scanf("%d",&n);
    printf("\nEnter the elementd of the matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nEnter a[%d][%d] value :: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe Digonals elements of a matrix are :: \n\n");
    if(m==n)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                    printf("\t%d",a[i][j]);
                else
                    printf("\t");
            }
            printf("\n\n");
        }
    }
        else
        {
            printf("\nMatrix is not a square Matrix.");
        }
        return 0;
}
