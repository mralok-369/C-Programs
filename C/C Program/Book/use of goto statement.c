//use of goto statement
#include<math.h>
void main()
{
    double x,y;
    int count;
    count=1;
    printf("Enter five real value in a line \n");
    read:
        scanf("%lf",&x);
        printf("\n");
        if(x<0)
            printf("value-%d is negative\n",count);
        else
        {
            y=sqrt(x);
            printf("%lf\t %lf\n",x,y);
        }
        count=count+1;
        if(count<=5)
            goto read;
        printf("\nEnd of computation");
}
