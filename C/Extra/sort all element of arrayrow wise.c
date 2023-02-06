// sort elements of 2d array row wise having 3 row and 3 column
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,k,temp;
    printf("Enter 3*3 matrix\n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=j+1; k<3; k++)
            {
                if(a[i][j]>a[i][k])
                {
                    temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
            }
        }
    }
    printf("\nRow by row sorted\n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
}
