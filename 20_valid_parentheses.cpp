// to be completed
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;  // Stack to store the opening brackets

        // Iterate through each character in the string
        for (char c : s) {
            // If the character is an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            }
            // If it's a closing bracket, check if it matches the top of the stack
            else {
                if (stk.empty()) return false; // If the stack is empty, no matching opening bracket
                char top = stk.top();
                stk.pop();
                // Check if the closing bracket matches the opening bracket
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // If the stack is empty, all brackets are matched
        return stk.empty();
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([)]";
    string test5 = "{[]}";

    cout << "Test 1: " << test1 << " -> " << (solution.isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << test2 << " -> " << (solution.isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << test3 << " -> " << (solution.isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << "Test 4: " << test4 << " -> " << (solution.isValid(test4) ? "Valid" : "Invalid") << endl;
    cout << "Test 5: " << test5 << " -> " << (solution.isValid(test5) ? "Valid" : "Invalid") << endl;

    return 0;
}
