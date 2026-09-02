// 4)Employee Salary
// A company wants to calculate an employee's gross salary.
// Read the employee's basic salary,hraand da and calculate the GROSS SALARY = BASIC SALARY + HRA + DA

#include<stdio.h>
#include<math.h>
int main()
{
	int BasicSalary;
	int HRA;
	int DA;
	
	printf("Enter BasicSalary :");
	scanf("%d",&BasicSalary);
	
	printf("Enter HRA :");
	scanf("%d",&HRA);
	
	printf("Enter DA :");
	scanf("%d",&DA);
	
	float GrossSalary = (BasicSalary+HRA+DA);
	
	printf("Gross Salary : %f\n",GrossSalary);
	return 0;
}
