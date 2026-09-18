#include<stdio.h>
int main()
{
	int days,books,total,i=0;
	printf("\nEnter the days :");
	scanf("%d",&days);
	for(i;i<=days;i++)
	{
	printf("\nEnter number of books returned on day :%d ",i);
	scanf("%d",&books);
	total=total+books;
    }
	printf("Total returned books : %d\n",total);
	return 0;
}
