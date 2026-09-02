//2) Shopping Bill
// A Student purchases a notebook,pen,and bag from a stationary shop.
//write a c program to read the price and quantitu of each item and calculate and display the toatl bill amount.

#include<stdio.h>
#include<math.h>
int main()
{
	int notebook = 1;
	int pen = 1;
	int bag = 1;
	
	int price_notebook;
	int price_pen;
	int price_bag;
	
	printf("\nenter price_notebook :");
	scanf("%d",&price_notebook);
	
    printf("\nenter price_pen :");
	scanf("%d",&price_pen);
	
	printf("\nenter price_bag :");
	scanf("%d",&price_bag);	
	
	int Total = (price_notebook+price_pen+price_bag);
	printf("Total Bill amount : %d",Total);
	return 0;
	
}
