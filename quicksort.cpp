// to be completed

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array around a pivot
int Partition(int *arr, int front, int end) {
    int pivot = arr[end]; // Choose the last element as pivot
    int i = front - 1; // Pointer for smaller element

    for (int j = front; j < end; j++) {
        // If current element is smaller than pivot
        if (arr[j] < pivot) {
            i++; // Move the smaller element to the left
            swap(&arr[i], &arr[j]);
        }
    }

    // Move pivot element to its correct position
    i++;
    swap(&arr[i], &arr[end]);
    return i;
}

// QuickSort function
void QuickSort(int *arr, int front, int end) {
    if (front < end) {
        // Partition the array and get pivot index
        int pivot = Partition(arr, front, end);

        // Recursively sort the left and right parts
        QuickSort(arr, front, pivot - 1);
        QuickSort(arr, pivot + 1, end);
    }
}

// Function to print the array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function to test the QuickSort algorithm
int main() {
    int arr[] = {8, 4, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    // Perform QuickSort
    QuickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
