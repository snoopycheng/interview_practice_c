#include <stdio.h>

int extractbits(int x, int n, int m) {
    int mask = (1 << (m - n + 1)) - 1;  // Create a mask of length (m-n+1) bits
    printf("%d",mask);
    return (x >> n) & mask;             // Shift right by n and apply mask
}

int main() {
    // Test cases
    int x1 = 12, n1 = 1, m1 = 3;
    int x2 = 12, n2 = 2, m2 = 3;
    int x3 = 12, n3 = 0, m3 = 1;

    printf("Input x = %d, n = %d, m = %d -> Output = %d\n", x1, n1, m1, extractbits(x1, n1, m1));
    printf("Input x = %d, n = %d, m = %d -> Output = %d\n", x2, n2, m2, extractbits(x2, n2, m2));
    printf("Input x = %d, n = %d, m = %d -> Output = %d\n", x3, n3, m3, extractbits(x3, n3, m3));

    return 0;
}
