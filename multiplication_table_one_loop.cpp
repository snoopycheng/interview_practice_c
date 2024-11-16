#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 81; i++){
        int row = (i - 1) / 9 + 1;
        int col = (i - 1) % 9 + 1;

        cout << row << "x" << col << "=" << row * col << " ";

        if(col == 9){
            cout << endl;
        }
    }
    return 0;
}