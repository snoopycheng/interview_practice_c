#include<iostream>
using namespace std;

int multiply(){
    int amatrix[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int bmatrix[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int product[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            for(int inner = 0; inner < 2; inner++){
                product[row][col] += amatrix[row][inner] * bmatrix[inner][col];
            }
            cout << product[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}

int main(){
    multiply();
    getchar();
    
    return 0;
}