#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter number of days: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Invalid entry! Number of days must be positive.\n");
    } while (n <= 0);

    int prices[n];

    for (int i = 0; i < n; i++) {
        do {
            printf("Enter price for day %d: ", i + 1);
            scanf("%d", &prices[i]);
            if (prices[i] < 0)
                printf("Invalid entry! Price cannot be negative.\n");
        } while (prices[i] < 0);
    }

    int min = prices[0];
    int profit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] - min > profit)
            profit = prices[i] - min;
        if (prices[i] < min)
            min = prices[i];
    }

    printf("Maximum Profit: %d\n", profit);
    return 0;
    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
}

