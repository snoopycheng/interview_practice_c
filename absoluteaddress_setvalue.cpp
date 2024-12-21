#include<iostream>
using namespace std;

int main(){
    int *ptr = (int *)0x67a9;
    *ptr = 0xaa55; // segmentation fault

    if(*ptr == 0xaa55){
        cout << "success" << endl;
    }
    else{
        cout << "fail" << endl;
    }

    return 0;
}