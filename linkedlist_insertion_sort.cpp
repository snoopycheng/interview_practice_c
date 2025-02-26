#include <iostream>

using namespace std;

// 定義鏈結節點
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SortedLinkedList {
public:
    Node* head;

    SortedLinkedList() : head(nullptr) {}

    // 插入並保持排序
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head || head->data >= value) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            while (current->next && current->next->data < value) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
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

    // 釋放記憶體
    ~SortedLinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    SortedLinkedList list;
    list.insert(5);
    list.insert(1);
    list.insert(8);
    list.insert(3);
    list.insert(7);
    
    cout << "Sorted Linked List: ";
    list.printList();
    
    return 0;
}
