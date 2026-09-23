#include <stdio.h>

int main()
 {
    int i, runs, total = 0, dots = 0;

    for (i = 1; i <= 6; i++)
	 {
	 	printf("Enter the runs :");
        scanf("%d", &runs);
        total += runs;

        if (runs == 0)
            dots++;
    }

    printf("Total runs = %d\n", total);
    printf("Dot balls = %d", dots);

    return 0;
}
