#include <iostream>
using namespace std;

// 定義鏈結串列的節點結構
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    
    LinkedList() : head(nullptr) {}
    
    // 插入節點，保持升序排序
    void insertSorted(int val) {
        Node* newNode = new Node(val);
        
        // 若鏈結串列為空，或新節點應插入頭部
        if (!head || head->data >= val) {
            newNode->next = head;
            head = newNode;
            return;
        }
        
        // 遍歷找到適當的插入位置
        Node* current = head;
        while (current->next && current->next->data < val) {
            current = current->next;
        }
        
        // 插入新節點
        newNode->next = current->next;
        current->next = newNode;
    }
    
    // 列印鏈結串列
    void printList() {
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
    list.insertSorted(10);
    list.insertSorted(5);
    list.insertSorted(20);
    list.insertSorted(15);
    list.insertSorted(7);
    
    list.printList(); // 輸出：5 -> 7 -> 10 -> 15 -> 20 -> NULL
    
    return 0;
}
