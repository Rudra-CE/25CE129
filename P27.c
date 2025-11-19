#include <stdio.h>

int fibonacci(int n);

int main() {
    int num_terms;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &num_terms);

    if (num_terms < 0) {
        printf("Invalid input. Please enter a non-negative number of terms.\n");
    } else {
        printf("Fibonacci Series: ");
        for (int i = 0; i < num_terms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
