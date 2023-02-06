#include<stdio.h>
#include<math.h>
void main()
{
int array[100],n,i,sum=0,mean;
float sd=0;
int *ptr=array;
printf("Enter the number of elements you want to use(<=100): ");
scanf("%d",&n);
printf("\nEnter %d Elements:",n);
for (i=0;i<n;i++)
scanf("%d",&array[i]);
// calculating sum mean and s.d. of given numbers
for (i=0;i<n;i++)
{
sum+=*ptr;
*ptr++;
}
mean=sum/n;
for(int i=0;i<n;i++)
sd+=pow(array[i] - mean, 2);
sd=sqrt(sd/n);
//Display sum,mean and standard deviation on screen
printf("\nSum = %d\nmean = %d\n Standard deviation = %.3f",sum,mean,sd);

}

