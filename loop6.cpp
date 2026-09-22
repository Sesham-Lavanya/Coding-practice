#include <stdio.h>

int main() {
    int n, i, count = 0;
    float rain, total = 0, threshold;
    printf("Enter the threshold :");
    scanf("%d %f", &n, &threshold);

    for (i = 1; i <= n; i++) 
	{
		printf(" Enter the rain :");
        scanf("%f", &rain);
        total += rain;

        if (rain > threshold)
            count++;
    }

    printf("Total rainfall = %.2f\n", total);
    printf("Heavy rainfall days = %d", count);

    return 0;
}
