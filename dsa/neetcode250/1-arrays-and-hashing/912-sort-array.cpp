// leetcode 912 sort an array (without using sort function)
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> sortarray(vector<int>& nums) {
    priority_queue<int,vector<int>,greater<int>> q;
    vector<int> ans;

    for(int val : nums) {
        q.push(val);
    }

    while(!q.empty()) {
        ans.push_back(q.top());
        q.pop();
    }

    return ans;
}

int main() {
    vector<int> nums = {2,3,1,5,7,8};
    vector<int> result = sortarray(nums);

    for(int val : result) {
        cout << val <<  " ";
    }

    return 0;
}