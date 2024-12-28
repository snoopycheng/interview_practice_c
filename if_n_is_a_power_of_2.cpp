// to be completed

#include <iostream>
using namespace std;


int define2N(int n) {
    return (!(n & (n - 1)) && n != 0);
}


int main() {
    int n;
    cout << "input n: ";
    cin >> n;
    int ans = define2N(n);
    if (ans == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
