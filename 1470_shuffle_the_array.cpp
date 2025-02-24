// to be completed

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n);
        for (int i = 0; i < n; i++) {
            result[2 * i] = nums[i];      // Place x_i
            result[2 * i + 1] = nums[i + n]; // Place y_i
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 5, 1, 3, 4, 7}; // Example input
    int n = 3;
    
    
    vector<int> shuffled = solution.shuffle(nums, n);
    
    cout << "Shuffled Array: ";
    for (int num : shuffled) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
