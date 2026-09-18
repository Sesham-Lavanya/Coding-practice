#include<stdio.h>
int main()
{
	int n,i,count=0;
	float amount,total=0,limit;
	printf("\nEnter the recharges:");
	scanf("%d",&n);
		printf("\nEnter the no.of limit : ");
	scanf("%f",&limit);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter the recharges amount : ");
	scanf("%f",&amount);
	total= total+amount;
	if(total>limit)
	count++;
    }
	printf("Total recharge amount : %f\n",total);
	printf("count above the limit : %f\n",limit);
	printf("exceeded limit :%d",count++);
	return 0;
}
