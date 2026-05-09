// leetcode 1 two sum
#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>& nums,int target) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i+1; j < nums.size(); j++) {
            if(nums[i]+nums[j] == target) {
                return {i,j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {3,4,5,6,7};
    int target = 8;

    vector<int> result = twosum(nums,target);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}