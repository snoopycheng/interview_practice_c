#include<iostream>
using namespace std;

int foo(){
    unsigned int a = 6;
    int b = -20;
    (a + b > 6) ? puts(">6") : puts("<=6");
    cout << a+b << endl;
    return 0;
}

int main(){

    foo();

    return 0;
}