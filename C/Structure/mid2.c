#include<stdio.h>
int main()
{
	int score[5][5],i,j;
	//taking marks input of 5 student:
	for(i=0; i<5; i++)
	{
		printf("Enter marks if %d student : ",i+1);
		for(j=0; j<5; j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
	//average of each student
	int avg=0;
	for(i=0; i<5; i++)
	{
		printf("avrage marks of %d student : ",i+1);
		for(j=0; j<5; j++)
		{
			avg=avg+(score[i][j]);
		}
		printf("%d",avg);
	}
	//finding highest in 3rd quiz
	int hig=0;
	for(j=0; i<5; j++)
	{
		if(score[2][hig]<score[2][j])
			hig=j;
	}
	printf("highest marks : %d th sudent",j);
}
