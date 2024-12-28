// to be completed

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        return -1;
    }
};


int main() {
    Solution solution;
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // Example array
    int target;


    cout << "Enter the target number: ";
    cin >> target;


    int result = solution.search(nums, target);


    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
