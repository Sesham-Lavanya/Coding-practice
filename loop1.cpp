#include<stdio.h>
int main()
{
	int days,i;
	float water,total=0;
	printf("\nEnter the days :");
	scanf("%d",&days);
	for(i=1;i<=days;i++)
	{
	printf("\nEnter water intake for each day:%d ",i);
	scanf("%f",&water);
	total+=water;
    }
	printf("Total water intake : %f\n",total);
	printf("Average water intake : %f\n",total/days);
	return 0;
}
