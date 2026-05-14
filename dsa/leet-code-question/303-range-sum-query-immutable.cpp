// leetcode 303 range sum query immutable
#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int> prefix;

public:
    // Constructor initializes the prefix sum array
    NumArray(vector<int>& nums) {
        int n = nums.size();
        // Size n + 1 simplifies the boundary condition where left == 0
        prefix.assign(n + 1, 0); 
        
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }
    
    // Calculates sum in O(1) time
    int sumRange(int left, int right) {
        // prefix[right + 1] holds sum from index 0 to right
        // prefix[left] holds sum from index 0 to left - 1
        return prefix[right + 1] - prefix[left];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    
    // Instantiate the class object
    NumArray numArray(nums);
    
    // Test cases
    cout << numArray.sumRange(0, 2) << endl; // Output: 1 (-2 + 0 + 3)
    cout << numArray.sumRange(2, 5) << endl; // Output: -1 (3 + -5 + 2 + -1)
    cout << numArray.sumRange(0, 5) << endl; // Output: -3
    
    return 0;
}
