// 是一種不能被實例化的類，它的主要作用是作為基類，為派生類提供介面。抽象類別的特徵是它至少有一個純虛函式（pure virtual function）

#include <iostream>
using namespace std;

// 定義一個抽象類別
class Shape {
public:
    // 純虛函式，必須由子類別實作. pure virtual function: 該函式沒有提供實作，必須在派生類中被實現
    virtual void draw() = 0;

    // 一個普通函式，子類可以繼承
    void info() {
        cout << "This is a shape.\n";
    }
};

// 具體類別繼承抽象類別
class Circle : public Shape {
public:
    // 必須實作純虛函式
    void draw() override {
        cout << "Drawing a Circle.\n";
    }
};

// 具體類別繼承抽象類別
class Square : public Shape {
public:
    // 必須實作純虛函式
    void draw() override {
        cout << "Drawing a Square.\n";
    }
};

int main() {
    // Shape s; // 錯誤！不能實例化抽象類別
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw(); // 呼叫 Circle 的 draw()
    shape2->draw(); // 呼叫 Square 的 draw()

    delete shape1;
    delete shape2;

    return 0;
}
