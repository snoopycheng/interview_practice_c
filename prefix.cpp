#include<iostream>
#include<string>
#include<vector>
using namespace std;

int check_prefix(string input, string prefix){
    string sim_input = input.substr(0, prefix.length());
    
    if(sim_input != prefix){
        cout << input << endl;
    }

    return 0;
}

int main(){
    string prefix;
    cout << "enter the prefix: ";
    cin >> prefix;

    vector<string> inputs = {
        "aaaabbbbccc",
        "badssssd",
        "mdjeld",
        "bbaaaakkdkd"
    };

    for(const string& input : inputs){
        check_prefix(input, prefix);
    }

    return 0;
}