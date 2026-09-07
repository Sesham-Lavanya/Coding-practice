// 1) A transport department wants to check whether a person is eligible to apply for a driving license.
// Question Write a c program to read the person's age. if the age is 18 or above,display "Eligible for Driving License".
// concepts : if

#include<stdio.h>
int main()
{
	int age;printf("enter age:");
	scanf("%d",&age);
	
	if(age >=18)
	{
		printf("Eligible");
	}
	return 0;
}
