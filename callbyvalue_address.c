#include <stdio.h>

// call by value
// 函式接收的是參數的「拷貝」，對該變數的修改不影響原變數
// 適用於基本資料型別（如 int、float 等）

// ad: 原變數不會被修改，安全性較高
// dis: 如果傳遞的變數是大型結構體，將會額外佔用記憶體並影響效能

// void modify(int x) {
//     x = 100; // 只修改拷貝，不影響原變數
// }

// int main() {
//     int a = 10;
//     modify(a);
//     printf("a = %d\n", a); // 仍然是 10
//     return 0;
// }

// call by address

// 函式接收變數的地址（指標），通過解引用 (*) 修改原變數的值
// 適用於需要在函式內修改變數的情況，如排序、交換等操作

// ad:可以直接修改原變數, 避免了值傳遞時的額外記憶體開銷（適用於大型結構體）
// dis: 需要使用指標 (*)，寫法較為複雜，容易發生空指標錯誤

void modify(int *x) {
    *x = 100; // 修改的是原變數的值
}

int main() {
    int a = 10;
    modify(&a);
    printf("a = %d\n", a); // 變成 100
    return 0;
}
