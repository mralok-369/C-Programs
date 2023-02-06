#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char s[1000];
    int  a[1000],i,j,k=0,count=0,n;
    gets(s);
    for(j=0;s[j];j++);
	   n=j;
    for(i=0;i<n;i++)
    {
    	a[i]=0;
    	count=1;
    	if(s[i])
    	{
 		  for(j=i+1;j<n;j++)
	      {
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }
       }
	   a[i]=count;
	   if(count>=k)
	     k=count;
 	}
	printf("%d",k);
    return 0;
}
