// sum of diagonal elements of a matrix
#include<stdio.h>
void main()
{
    int a[10][10],i,j,sum=0,m,n;
    printf("\nEnter the row and colum of matrix: ");
    scanf("%d %d",&m,&n);
    printf("\nEnter the elments of a matrix: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("original matrix\n");
     for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                sum=sum+a[i][j];
        }
    }
    printf("\nSum of the diagonal elements of a matrix is :%d",sum);
}
