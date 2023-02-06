//getstring from user without displaying it on consol
#include<stdio.h>
int main()
{
    char str[100],ch;
    int n,count=0;
    printf("\nEnter string : ");
    while(1)
    {
        ch=getch();
        if(ch==13) //13 is ascii value of \n
        {
            break;
        }
        str[count]=ch;
        count++;
    }
    printf("\nEntered string : %s",str);
    return 0;
}
