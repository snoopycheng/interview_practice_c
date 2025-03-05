#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor\n";
    }
    ~Base() {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor\n";
    }
    ~Derived() {
        cout << "Derived Destructor\n";
    }
};

int main() {
    cout << "Creating an object of Derived class\n";
    Derived d;  // 建立Derived類對象
    cout << "Object of Derived class created\n";
    return 0;    // 程式結束，對象d被銷毀
}

// constructor:
// 沒有返回值
// 與類名同名
// 可以有參數（有參數建構子）或無參數（預設建構子）
// 可以有多個建構子（函數重載）

// destructor:
// 沒有參數，不能重載
// 沒有返回值
// 只有一個解構子，並且不能被調用
// 當對象的生命週期結束時自動調用