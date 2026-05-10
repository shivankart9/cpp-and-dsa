// leetcode 347 top k frequent elements
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> kfrequent(vector<int>& nums,int k) {
    unordered_map<int,int> m;
    vector<pair<int,int>> ans;
    vector<int> result;
    for(int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }
    for(auto val : m) {
        ans.emplace_back(val.second,val.first);
    }
    sort(ans.begin(),ans.end());
    for(int i = ans.size()-1; k > 0; i--) {
        result.push_back(ans[i].second);
        k--;
    }

    return result;
}

int main() {
    vector<int> nums = {3,2,4,3,3,2,2,6,7,6};
    int k = 3;
    vector<int> result = kfrequent(nums,k);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}