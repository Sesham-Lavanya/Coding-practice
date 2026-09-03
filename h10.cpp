// Restraunt bill
// A restraunt wants a simple billing program
//Read the price of food item and their quantities and calcuate the total amount.

#include<stdio.h>
#include<math.h>
int main()
{
	int pizza = 250*2;
	int Juice = 80*2;
	int Burger = 150*1;
	
	printf("enter cost of pizza : %d\n",pizza);
	printf("enter cost of Juice : %d\n",Juice);
	printf("enter cost of Burger : %d\n",Burger);
	
	int total = (pizza+Juice+Burger);
	printf("Total Bill Amount : %d\n",total);
	return 0;
}
