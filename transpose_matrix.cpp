#include<iostream>
using namespace std;

int main(){
    int row, col;

    cout << "input row col: " << endl;
    cin >> row >> col;

    cout << "input matrix (ex: 1 2 3): " << endl;

    int x[100][100];
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> x[i][j];
        }
    }

    cout << "ans: " << endl;
    
    for(int j = 0; j < col; j++){
        for(int k = 0; k < row; k++){
            cout << x[k][j] << " ";
        }
        cout << endl;
    }

    return 0;
}