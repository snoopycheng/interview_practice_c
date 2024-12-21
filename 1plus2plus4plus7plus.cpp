#include<iostream>
using namespace std;

int main(){
    int current = 1;
    int diff = 1;
    int sum = 0;

    while(current <= 106){
        sum += current;
        current += diff;
        diff++;
    }

    cout << sum << endl;

    return 0;
}