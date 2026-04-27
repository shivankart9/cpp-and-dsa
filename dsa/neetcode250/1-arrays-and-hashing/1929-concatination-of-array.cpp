// this is neet code 250 first question
// leetcode - 1929 concatination of array
#include<iostream>
#include<vector>
using namespace std;

vector<int> concatination(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2*n);

    for(int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }
    
    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> result = concatination(nums);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}