#include<stdio.h>
int main()
{
	int amount;
	printf("enter amount:");
	scanf("%d",&amount);
    float balanceamount = 20000;
	
	if(amount<=20000)
	{
		printf("Transaction Successful");
	}
	else
	{
		printf("Insufficient Balance");
	}
	return 0;
}
