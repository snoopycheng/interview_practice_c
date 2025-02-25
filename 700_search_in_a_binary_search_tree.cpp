#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root || root->val == val) return root;
        return val < root->val ? searchBST(root->left, val) : searchBST(root->right, val);
    }
};

// Helper function to create a new TreeNode
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// Helper function to print preorder traversal
void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Construct BST: [4,2,7,1,3]
    TreeNode* root = nullptr;
    root = insert(root, 4);
    insert(root, 2);
    insert(root, 7);
    insert(root, 1);
    insert(root, 3);

    Solution sol;
    int val = 2; // Value to search
    TreeNode* result = sol.searchBST(root, val);

    if (result) {
        cout << "Subtree rooted at " << val << ": ";
        preorder(result);
    } else {
        cout << "[]"; // Value not found
    }
    cout << endl;

    return 0;
}
