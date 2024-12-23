#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "input a number: " << endl;
    cin >> n;

    int n1 = n;

    // method 1

    // while(n >= 3){
    //     n -= 3;
    // }

    // if(n == 0){
    //     cout << n1 << " is a multiple of 3" << endl;
    // }
    // else{
    //     cout << n1 << " is not multiple of 3" << endl;
    // }

    // method 2

    while(n > 0){
        n -= 3;
    }

    if(n == 0){
        cout << n1 << " is a multiple of 3" << endl;
    }

    else{
        cout << n1 << " is not multiple of 3" << endl;
    }


    return 0;
}