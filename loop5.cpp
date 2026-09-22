#include <stdio.h>

int main()
 {
    int n, i, attendance, total = 0;
    printf("Enter the n value :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
	 {
	 	printf("Enter the attendence :");
        scanf("%d", &attendance);
        total= total+attendance;
    }

    printf("Total = %d\n", total);
    printf("Average = %.2f", (float)total / n);

    return 0;
}
