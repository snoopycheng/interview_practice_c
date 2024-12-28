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


class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* pre = head;
        ListNode* cur = head->next;
        while (cur && cur->next) {
            ListNode* tmp = pre->next;
            pre->next = cur->next;
            cur->next = cur->next->next;
            pre->next->next = tmp;
            cur = cur->next;
            pre = pre->next;
        }
        return head;
    }
};


// Helper function to print the linked list
int printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}


// Helper function to create a linked list from an array
ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}


int main() {
    Solution solution;


    // Example list: 1 -> 2 -> 3 -> 4 -> 5
    int arr[] = { 1, 2, 3, 4, 5 };
    ListNode* head = createList(arr, 5);


    cout << "Original list: ";
    printList(head);


    // Apply oddEvenList
    head = solution.oddEvenList(head);


    cout << "After reordering odd and even: ";
    printList(head);


    return 0;

}


