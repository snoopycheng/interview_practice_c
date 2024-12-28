#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int findmaxsum(vector<int>& nums){
        int cursum = nums[0];
        int maxsum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            cursum = max(nums[i], nums[i] + cursum);
            maxsum = max(maxsum, cursum);
        }
        return maxsum;
    }
};

int main(){
    Solution solution;

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    cout << "max sum = " << solution.findmaxsum(nums) << endl;

    return 0;
}