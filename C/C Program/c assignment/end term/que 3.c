#include <stdio.h>
#include <string.h>
int main()
{
    reverseString();
    swapNumbers();
    return 0;
}
// function for reversing a string
int reverseString()
{
   char s[100];
   printf("Enter a string to reverse : \n");
   gets(s);
   strrev(s);
   printf("Reverse of the string: %s\n", s);
   return 0;
}
// function to swap numbers without third variable
int swapNumbers()
{
    int a,b;
    printf("Enter two numbers for swapping : \n");
    scanf("%d %d",&a,&b);
    printf("Before swaping\n a = %d , b = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping\n a = %d , b= %d\n",a,b);
    return 0;
}
