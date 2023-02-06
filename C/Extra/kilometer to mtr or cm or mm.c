// K.M. to meter centimeter or mm
#include<stdio.h>
int main()
{
    float km;
    int v;
    float ans;
    printf("Enter distance in k.m. : ");
    scanf("%f",&km);
    printf("\nEnter 1 for meter 2 for centimeter and 3 for milimeter : ");
    fflush(stdin);
    scanf("%d",&v);
    if(v==1)
    {
        ans=km*1000;
    }
    if(v==2)
    {
        ans=km*100000;
    }
    if(v==3)
    {
        ans=km*1000000;
    }
    printf("\nAnswer : %.2f",ans);
    return 0;

}
