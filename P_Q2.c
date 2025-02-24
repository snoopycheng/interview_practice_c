#include <stdio.h>

void print_missing_numbers(int *a, int size, int b) {
    int *ptr = a;
    int i;

    // Move pointer to the first element >= b * 100
    while (ptr - a < size && *ptr < b * 100) {
        ptr++;
    }

    // Print numbers in range [b*100, (b+1)*100) excluding those in the array
    for (i = b * 100; i < (b + 1) * 100; i++) {
        if (ptr - a < size && *ptr == i) {
            ptr++;
        } else {
            printf("%d\n", i);
        }
    }
}

int main() {
    int a[] = {5, 23, 67, 120, 145, 178, 202, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850};
    int size = sizeof(a) / sizeof(a[0]);
    int b;

    printf("Enter b (0-4): ");
    scanf("%d", &b);

    if (b < 0 || b > 4) {
        printf("Invalid input. b must be between 0 and 4.\n");
        return 1;
    }

    print_missing_numbers(a, size, b);
    return 0;
}
