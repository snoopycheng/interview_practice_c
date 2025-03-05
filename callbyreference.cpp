#include <iostream>
using namespace std;

// 式接收的是變數的引用（C++ 提供 &），修改時直接作用於原變數
// C 語言不直接支援 Call by Reference，但可以通過指標模擬（即 Call by Address）
// 適用於 C++，可用於物件傳遞時避免大量複製開銷

void modify(int &x) { // 傳入引用
    x = 100; // 直接修改原變數
}

int main() {
    int a = 10;
    modify(a);
    cout << "a = " << a << endl; // 變成 100
    return 0;
}
