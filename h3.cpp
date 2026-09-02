// 3)Student Marks
// A teacher wants to calculate the total marks obtained by a student.
// Read marks obtained in three subjects and display:
// Marks in each subject
// Total Marks
// Average Marks

#include<stdio.h>
#include<math.h>
int main()
{
	int subject1;
	int subject2;
	int subject3;
	
	printf("\nenter subject1 :");
	scanf("%d",&subject1);
	
	printf("\nenter subject2 :");
	scanf("%d",&subject2);
	
	printf("\nenter subject3 :");
	scanf("%d",&subject3);
	int marksobtained = (subject1+subject2+subject3);
	int total = 300;
	float average = (marksobtained/300.0);
	
	printf("Total Marks : %d\n",total);
	printf("Average Marks : %f\n",average);
	
	return 0;
	}
