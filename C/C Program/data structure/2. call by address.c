#include<stdio.h>
void main()
{
    int x =100;
    printf("Before function call: x = %d\n",x);
    change(&x);

}
void change(int *num)
{
    *num+=100;
    printf("After function call: x = %d\n",*num);
}
