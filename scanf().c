#include <stdio.h>
int main(){
	int a;
	float b;
	char c='A';
	printf("enter a :");
	scanf("%d",&a);
	
	printf("enter b :");
	scanf("%f",&b);
	
	printf("enter c :%d",'A');
	printf("\nsum of a+b:%f",(a+b));
	printf("\nsum of b+c:%.2f",(b+c));
	printf("\nsum of a+c:%d",(a+c));
	return 0;
}
