#include <stdio.h>

// Function to compute the 32-based ceiling value of x
unsigned int ceil32(unsigned int x) {
    return (x + 31) & ~31;
}

int main() {
    // Test cases
    unsigned int test_cases[] = {1, 31, 50, 64};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_tests; i++) {
        printf("Input: %u -> Output: %u\n", test_cases[i], ceil32(test_cases[i]));
    }
    
    return 0;
}
