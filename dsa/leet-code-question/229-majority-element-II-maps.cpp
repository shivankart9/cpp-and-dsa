// leetcode 229 majority element II 
// this  is done using maps
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> majority_element(vector<int>& nums) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }
    for(auto val : m) {
        if(val.second > nums.size()/3) {
            ans.push_back(val.first);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2};
    vector<int> result = majority_element(nums);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}