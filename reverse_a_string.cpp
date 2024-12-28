// to be completed

#include <iostream>
using namespace std;

void swap(char* a, char* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Recursively reverse one character at a time
void reverseOne(char* s) {
    if (*(s + 1) == '\0')  // Base case: End of the string
        return;
    reverseOne(s + 1);  // Recursive call to move to the next character
    swap(s, s + 1);  // Swap the current character with the next one
}


// Reverse the entire string by calling reverseOne repeatedly
void reverseAll(char* s) {
    if (*s == '\0')  // Base case: End of the string
        return;
    while (*(s + 1) != '\0') {  // Traverse through the string
        reverseOne(s);
        s++;  // Move to the next character
    }
}


int main() {
    char str[] = "Hello, World!";
    reverseAll(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}
