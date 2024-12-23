#include<iostream>
using namespace std;

int swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;

    return 0;
}

int main(){
    int n1, n2;
    cout << "input 2 numbers: " << endl;
    cin >> n1 >> n2;

    swap(&n1, &n2);

    cout << "after swapping: " << n1 << " " << n2 << endl;

    return 0;
}