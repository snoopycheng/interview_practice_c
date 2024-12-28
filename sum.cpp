#include<iostream>
using namespace std;

int cal(int n){
    int sum;
    sum = n * (n + 1) / 2;
    return sum;
}

int main(){
    int n;
    cout << "input n: " << endl;
    cin >> n;

    int ans;
    ans = cal(n);
    cout << ans << endl;
    
    return 0;
}