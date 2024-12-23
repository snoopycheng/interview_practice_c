#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
    string ispalindrome(string s){
        int i = 0;
        int j = s.length() - 1;
        while(i < j){
            while(i < j && !isalnum(s[i])){ // alphanumeric
                ++i;
            }
            while(i < j && !isalnum(s[j])){
                --j;
            }
            if(tolower(s[i++]) != tolower(s[j--])){
                return "No";
            }
        }
        return "YES";
    }
};

int main(){
    Solution solution;
    string s;

    cout << "input string: " << endl;
    getline(cin, s);

    cout << solution.ispalindrome(s) << endl;

    return 0;
}