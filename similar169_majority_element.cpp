#include<iostream>
#include<vector>
using namespace std;

// Boyer-Moore voting algorithm
// Majority element: an element that appears more than n/2 times in the array

class Solution {
public:
    pair<int, int> majorityElement(vector<int>& nums) {
        int count = 0; // Track the count of the current candidate element
        int candidate = 0; // Keep track of the potential majority element

        // Find candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Count its occurrences
        int frequency = 0;
        for (int num : nums) {
            if (num == candidate) {
                frequency++;
            }
        }

        return {candidate, frequency};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    // Get the result as a pair
    pair<int, int> result = solution.majorityElement(nums);

    cout << "Majority Element: " << result.first << endl;
    cout << "Frequency: " << result.second << endl;

    return 0;
}
