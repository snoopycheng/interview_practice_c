#include<iostream>
using namespace std;

#define setbit(x, n) (x |= (1 << n))
#define clearbit(x, n) (x &= ~(1 << n))
#define inversebit(x, n) (x ^= (1 << n))

int main(){
    int x = 0;
    setbit(x, 3);
    cout << "after setting bit 3: " << x << endl;

    clearbit(x, 3);
    cout << "after clearing bit 3: " << x << endl;

    inversebit(x, 3);
    cout << "after inversing bit 3: " << x << endl;

    return 0;
}