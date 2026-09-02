// 5)Temperature Conversion 
// A weather application store temperature in Celsius.
// Write a c program to read temperature in celsius and convert it into fahrenheit.
// FORMULA : (C*9/5)+32;

#include<stdio.h>
#include<math.h>
int main()
{
	float c,f;
	printf("Enter Temoerature in celsius : ");
	scanf("%f",&c);
	f = (c*9/5.0)+32;
	printf("Temperature in Fahrenheit = %.2f",f);
	return 0;
}
