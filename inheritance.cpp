#include <iostream>
using namespace std;

// 子類（Derived Class）繼承父類（Base Class）的屬性與方法，能夠重用代碼並擴展功能

// 父類（基底類）
class Animal {
public:
    void eat() { cout << "This animal is eating." << endl; }
};

// 子類（衍生類）
class Dog : public Animal {
public:
    void bark() { cout << "Woof! Woof!" << endl; }
};

// 另一個子類
class Cat : public Animal {
public:
    void meow() { cout << "Meow~" << endl; }
};

int main() {
    Dog myDog;
    myDog.eat();   // 繼承自 Animal 的方法
    myDog.bark();  // Dog 自己的方法

    Cat myCat;
    myCat.eat();   // 繼承自 Animal 的方法
    myCat.meow();  // Cat 自己的方法
    return 0;
}

// ad:
// 代碼重用，提高開發效率
// 允許擴展現有類別
// 提供層級架構，便於管理

// dis:
// 增加耦合性，子類與父類高度依賴
// 過度使用可能導致類別層級過深，難以維護