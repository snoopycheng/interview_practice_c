// last updated: 12/23
// to be completed

class Solution{
public:
    ListNode* swapNodes(ListNode* head, int k){
        ListNode* first = nullptr; // pointer to the k-th node from the beginning
        ListNode* second = nullptr; // pointer to the k-th node from the end
        ListNode* current = head;

        // traverse the list
        int length = 0;
        while(current){
            length++;
            
            if(length == k){
                first = current;
            }
            current = current -> next;
        }

        // find the k-th node from the end
        current = head;
        for(int i = 1; i <= length - k; i++){
            current = current -> next;
        }
        second = current;

        // swap
        if(first && second){
            std::swap(first -> val, second -> val);
        }

        return head;
    }
};

