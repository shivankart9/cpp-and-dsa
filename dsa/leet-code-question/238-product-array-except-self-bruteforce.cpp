// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].nums[1,2,3,4] ans = [24,12,8,6]
// 238 product of array except self
// we can not use division operator
// brute force approach
#include<iostream>
#include<vector>
using namespace std;

vector<int> productexceptself(vector<int>& nums) {
    vector<int> ans; // made an empty vector
    for(int i = 0; i < nums.size(); i++) {
        int product = 1; // made this inside loop so product get reset for every element
        for(int j = 0; j < nums.size(); j++) {
            if(i != j) { // for skiping the itself element
                product *= nums[j]; // multiplying left elements
            }
        }
        ans.push_back(product); // storing in empty vector
    }
    return ans; // return the stored element 
}

int main() {
    vector<int> nums = {1,2,3,4} ;
    vector<int> result = productexceptself(nums);

    for(int val : result) {
    cout <<  val << " " ;
    }

    return 0;
}