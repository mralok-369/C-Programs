// count number of negative positive and zero array elements
#include<stdio.h>
#include<conio.h>
void main()
{
    int m[10],i,pos=0,neg=0,zero=0,n;
    printf("How Many numbers ?");
    scanf("%d",&n);
    printf("Enter %d integers elements \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m[i]);
        if(m[i]>0)
        {
            pos++;
        }
        else if(m[i]<0)
        {
            neg++;

        }
        else
        {
            zero++;
        }
    }
    printf("\nPositive elements =%d\n",pos);
    printf("\nNegative elements =%d\n",neg);
    printf("\nZero elements =%d\n",zero);
    getch();
}
