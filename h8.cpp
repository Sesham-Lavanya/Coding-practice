// 8)Elercity Bill
// An electricity deperatment records the number of units consumed by a customer.
//Write a c program to read the customer name,customerID and number of units consumed and display them as a simple electricity bill.
//Cost per unit = 5
// Bill Amount = Units*Cost per unit;

#include<stdio.h>
#include<math.h>
int main()
{
	char name[14] = "LAVANYA";
	int ID;
	int units;
	
	printf("\n enter name :%s",name);
	
	printf("\n enter ID : ");
	scanf("%d",&ID);
	
	printf("\n enter units : ");
	scanf("%d",&units);
	
	float costperunit = 5;
	float BillAmount = (units*costperunit);
	
	printf("\nBill Amount : %f",BillAmount);
	return 0;
}


