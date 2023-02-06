// Ellipsis demo passing variable arguments to a function
#include<stdio.h>
#include<stdarg.h>
float findAve(int numargs,...)
{
    int total=0;
    int arg;
    float ave;
    va_list listPointer;
    va_start(listPointer,numargs);
    for(int i=0; i<numargs; i++)
    {
        arg=va_arg(listPointer,int);
        total+=arg;
    }
    va_end(listPointer);
    ave=total/numargs;
    return ave;
}

void main()
{
    float ave;
    printf("Calling findAve(3,55,65,75): \n");
    ave=findAve(3,55,65,75);
    printf("the average of the given numbers is %0.2f\n\n",ave);
    printf("calling findAve(6,10,20,30,40,50,60): \n");
    ave=findAve(6,10,20,30,40,50,60);
    printf("The average of the given number is %0.2f\n\n",ave);
}
