// 7) Rectangle Measurement 
// A construction company wants to calculate the area of a rectangular room.
// Read the length and breadth of the room and display it's area and perimeter.
// Area = Length*Breadth
// Perimeter = 2*(Length+Breadth);

#include<stdio.h>
#include<math.h>
int main()
{
	int Length,Breadth;
	printf("\nEnter Length:");
	scanf("%d",&Length);
	
	printf("\nEnter Breadth:");
	scanf("%d",&Breadth);
	
	float Area=(Length*Breadth);
	float Perimeter = (2*(Length+Breadth));
	
	
	printf("\nArea : %.0f",Area);
	printf("\nPerimeter : %.0f",Perimeter);
	return 0;
	
}
