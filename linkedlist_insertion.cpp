#include <iostream>
using namespace std;

// 定義鏈結串列的節點結構
class Node {
public:
    int data;
    Node* next;
    Node(int val) { 
        data = val; 
        next = nullptr; 
    }
};

// 定義鏈結串列類別
class LinkedList {
public:
    Node* head;
    
    LinkedList() { head = nullptr; }
    
    // 在鏈結串列尾部插入節點
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    // 在指定位置插入節點（0-based index）
    void insertAtPosition(int val, int pos) {
        Node* newNode = new Node(val);
        if (pos == 0) { // 插入到頭部
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < pos - 1; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of range" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    // 顯示鏈結串列
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.display(); // 輸出: 10 -> 20 -> 30 -> 40 -> NULL
    
    list.insertAtPosition(25, 2);
    list.display(); // 輸出: 10 -> 20 -> 25 -> 30 -> 40 -> NULL
    
    list.insertAtPosition(5, 0);
    list.display(); // 輸出: 5 -> 10 -> 20 -> 25 -> 30 -> 40 -> NULL
    
    return 0;
}
