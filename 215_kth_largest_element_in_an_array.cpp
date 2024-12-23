#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int findk(vector<int> &nums, int k){
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

int main(){
    int k = 2;

    vector<int> nums = {5, 1, 2, 4, 4, 6};

    Solution solution;
    
    cout << "ans = " << solution.findk(nums, k) << endl;

    return 0;
}