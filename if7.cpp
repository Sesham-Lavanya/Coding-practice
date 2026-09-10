#include<stdio.h>
int main()
{
	int amount;
	printf("enter amount:");
	scanf("%d",&amount);
	int Total = 100000;
	float percentage = (amount/100000.0)*100.0;
	
	if(amount>=5000)
	{
		printf("After 10% Discount Price :%f\n",percentage);
	}
	else
	{
		printf("No Discount");
	}
	return 0;
}
