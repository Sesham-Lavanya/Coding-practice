#include <stdio.h>
int main()
{
	float a;
	printf("Enter the value of a:");
	scanf("%f",&a);
	
	float b;
	printf("Enter the value of b:");
	scanf("%f",&b);
	
	float sum=a+b;
	printf("Sum of a+b:%.2f",sum);
	
	float diff=a-b;
	printf("\n of a-b:%.2f",diff);
	
	float product=a*b;
	printf("\nProduct of a*b:%.2f",product);
	
	return 0;
}
