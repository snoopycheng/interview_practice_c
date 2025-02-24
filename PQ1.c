#include <stdio.h>

void function(int* a, int size) {
    int* ptr = a;  // 指向排序後的陣列
    for (int i = 0; i <= 500; i++) {
        if (ptr - a < size && *ptr == i) // 確保 ptr 不超出陣列範圍
            ptr++;
        else
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int a[] = {5, 10, 15, 20, 25, 50, 100, 200, 300, 400, 500}; // 排序後的陣列
    int size = sizeof(a) / sizeof(a[0]);
    
    function(a, size);
    
    return 0;
}
