// Mobile data usage
// A mobile user wants to know how much data was consumed.
// Read the total available data and used data in GB. display:
//Avaible data
//Used data
// Remaining data
//Remaining Data = Available Data - Used data

#include<stdio.h>
#include<math.h>
int main()
{
	float Availabledata = 3069.46;
	float Useddata = 2.54;
	float remainingdata = (Availabledata - Useddata);
	
	printf("Remaining data : %f",remainingdata);
	return 0;
	
}
