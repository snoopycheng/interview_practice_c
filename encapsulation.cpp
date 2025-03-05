#include <iostream>
using namespace std;

// 將資料（變數）和行為（函式）封裝在一起，並透過存取修飾詞（private, protected, public）來控制外部對內部資料的訪問

class BankAccount {
private:
    double balance;  // 私有變數，外部無法直接存取

public:
    // 建構函式
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Invalid initial balance. Set to 0." << endl;
        }
    }

    // 存款方法
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    // 提款方法
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // 取得餘額
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100);  // 初始存款 100
    myAccount.deposit(50);       // 存款 50
    myAccount.withdraw(30);      // 提款 30
    cout << "Current Balance: $" << myAccount.getBalance() << endl;
    return 0;
}

// ad:
// 保護數據，避免外部直接存取
// 增強程式的可維護性與可讀性
// 透過介面（getter/setter）控制數據存取

// dis:
// 增加程式碼複雜度
// 若過度封裝，可能影響效能