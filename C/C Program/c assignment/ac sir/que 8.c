#include<stdio.h>
union type{
    int i;
    float f;
};
int main()
{
    union type arr[5];
    arr[0].i=10;
    arr[1].f=15.56;
    arr[2].i=65;
    arr[3].f=56.253;
    arr[4].i=145;
    printf("%d\n",arr[0].i);
    printf("%.5f\n",arr[1].f);
    printf("%d\n",arr[2].i);
    printf("%.5f\n",arr[3].f);
    printf("%d\n",arr[4].i);
    return 0;
}
