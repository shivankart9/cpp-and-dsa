// leetcode 303 range sum query immutable
#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int> prefix;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        // Size n + 1 simplifies the boundary condition where left == 0
        prefix.assign(n + 1, 0); 
        
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }
    
   
    int sumRange(int left, int right) {
        // prefix[right + 1] holds sum from index 0 to right
        // prefix[left] holds sum from index 0 to left - 1
        return prefix[right + 1] - prefix[left];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    
   
    NumArray numArray(nums);
    
    
    cout << numArray.sumRange(0, 2) << endl; 
    cout << numArray.sumRange(2, 5) << endl;
    cout << numArray.sumRange(0, 5) << endl;
    
    return 0;
}
