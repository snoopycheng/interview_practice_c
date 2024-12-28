// to be completed

#include <iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


// Solution class to reverse the singly linked list.
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while (cur) {
            ListNode* tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }
        return prev;
    }
};


// Helper function to print the linked list.
int printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    return 0;
}


// Helper function to create a linked list from an array.
ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;
    for (int i = 1; i < size; ++i) {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }
    return head;
}


int main() {
    // Example linked list: 1 -> 2 -> 3 -> 4 -> 5
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);


    // Create the linked list.
    ListNode* head = createList(arr, size);


    // Print the original list.
    cout << "Original list: ";
    printList(head);


    // Reverse the list.
    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);


    // Print the reversed list.
    cout << "Reversed list: ";
    printList(reversedHead);

    return 0;
}
