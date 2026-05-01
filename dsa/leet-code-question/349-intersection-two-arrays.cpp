// leetcode 349 intersection of two arrays
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1,vector<int>& nums2) {
    vector<int> ans;

    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
    nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());

    for(int val : nums1) {
        for(int val2 : nums2) {
            if(val == val2) {
                ans.emplace_back(val);
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums1 = {2,8,5,4,5}, nums2 = {4,7,9,5};

    vector<int> result = intersection(nums1,nums2);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}