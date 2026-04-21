// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].nums[1,2,3,4] ans = [24,12,8,6]
// 238 product of array except self
// we can not use division operator
// optimised 
#include<iostream>
#include<vector>
using namespace std;

vector<int> productexceptself(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
    // prefix
    for(int i = 1; i < n; i++) {
        ans[i] = ans[i-1]*nums[i-1];
    }

    int suffix = 1;
    // suffix
    for(int i = n-2; i >= 0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4}; 
     
    vector<int> result =  productexceptself(nums);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}