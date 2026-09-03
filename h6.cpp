// 6) Simple Interest
//A bank wants to calculate the simple interest on a customers's deposit.
// Read principal amount,rate of interest and time and calculate the simple interest.

#include<stdio.h>
#include<math.h>
int main()
{
	int  p,r,t;
	printf("Enter p: ");
	scanf("%d",&p);
	
		printf("Enter r: ");
	scanf("%d",&r);
	
		printf("Enter t: ");
	scanf("%d",&t);
	
	
	int total = (p*r*t);
   	float si = (total/100.0);
	
	printf("Simple Interst : %.2f\n",si);
	return 0;
}
