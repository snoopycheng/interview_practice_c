// to be completed

#include <iostream>
using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap the elements at the start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the indices towards each other
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array: ";
    printArray(arr, n);
    
    reverseArray(arr, n);
    
    cout << "Reversed Array: ";
    printArray(arr, n);

    return 0;
}