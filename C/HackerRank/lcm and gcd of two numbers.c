#include<stdio.h>
#include<conio.h>
int main()
{
	 int num1, num2, hcf, lcm, i;
	 printf("Enter two number: ");
	 scanf("%d %d",&num1,&num2);
	 for(i=1; i<=num1; i++)
	 {
		  if(num1%i==0 && num2%i==0)
		  {
		   	hcf = i;
		  }
	 }
	 lcm = (num1 * num2)/hcf;
	 printf("HCF = %d and LCM = %d", hcf, lcm);
	 getch();
	 return(0);
}
