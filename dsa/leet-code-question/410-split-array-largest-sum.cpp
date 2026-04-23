// this program returns the smallest maximum value
// leetcode 410- split array largest longest sum
// binary search
#include<iostream>
#include<vector>
#include<numeric> // for accumulate
#include<algorithm>
using namespace std;

bool isvalid(vector<int>& nums, int k, int maxallowedsum) {
    int subarrays = 1, current_sum = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] > maxallowedsum) return false; // Single element exceeds limit

        if(current_sum + nums[i] <= maxallowedsum) {
            current_sum += nums[i];
        } else {
            subarrays++;
            current_sum = nums[i];
        }
    }
    return subarrays <= k; // Check if we stayed within the k split limit
}

int splitarray(vector<int>& nums, int k) {
    int st = 0, end = 0, ans = -1;
    
    for(int x : nums) {
        st = max(st, x); // Start range at the largest single element
        end += x;        // End range at the sum of all elements
    }

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(isvalid(nums, k, mid)) {
            ans = mid;
            end = mid - 1; // Try to find a smaller "maximum"
        } else {
            st = mid + 1;  // Increase the limit
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 1, 3, 4};
    int k = 2;
    cout << "Smallest maximum sum: " << splitarray(nums, k) << endl;
    return 0;
}
