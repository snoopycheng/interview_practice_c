#include <iostream>
using namespace std;

// 1. 函式重載（Function Overloading）
// 允許同一個函式名稱有不同的參數類型與數量，提高可讀性與靈活性

// class Math {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     double add(double a, double b) {
//         return a + b;
//     }

//     int add(int a, int b, int c) {
//         return a + b + c;
//     }
// };

// int main() {
//     Math calculator;
//     cout << calculator.add(2, 3) << endl;         // 輸出 5
//     cout << calculator.add(2.5, 3.5) << endl;     // 輸出 6.0
//     cout << calculator.add(1, 2, 3) << endl;      // 輸出 6
//     return 0;
// }

// 2. 虛擬函式（Virtual Function）
// 透過 virtual 關鍵字，確保 makeSound() 在執行時調用的是子類別的版本（動態綁定）
// 若未使用 virtual，則無論 Dog 或 Cat，都只會呼叫 Animal 版本的 makeSound()，這樣就無法實現真正的多型

// 基底類
class Animal {
public:
    virtual void makeSound() { cout << "Some generic animal sound." << endl; }
};

// 衍生類
class Dog : public Animal {
public:
    void makeSound() override { cout << "Woof! Woof!" << endl; }
};

class Cat : public Animal {
public:
    void makeSound() override { cout << "Meow~" << endl; }
};

int main() {
    Animal* myAnimal1 = new Dog();
    Animal* myAnimal2 = new Cat();

    myAnimal1->makeSound();  // 輸出：Woof! Woof!
    myAnimal2->makeSound();  // 輸出：Meow~

    delete myAnimal1;
    delete myAnimal2;
    return 0;
}

// ad:
// 提供彈性，允許不同類別的對象以統一方式操作
// 支援函式重載與虛擬函式，提升擴展性

// dis:
// 動態多型（使用虛擬函式）可能帶來效能開銷
// 需要正確使用 virtual，否則可能導致未預期的行為