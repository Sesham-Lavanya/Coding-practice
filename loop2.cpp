#include<stdio.h>
int main()
{
	int i;
	float fuel,total=0;

	for(i=1;i<=7;i++)
	{
	printf("\nEnter the fuel used for each day : ");
	scanf("%f",&fuel);
	total= total+fuel;
    }
	printf("Weekly Total : %f\n",total);
	printf("Average fuel consumption : %f\n",total/7);
	return 0;
}
