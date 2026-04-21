// this program returns the index of the given target if found in the array otherwise it prints -1
// leetcode 33-search in roated sorted array
// this is done by linear search whose time complexity is  O(n). but we have to do in by O(log n) by binary search
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {3,4,5,6,7,0,1,2};
    int target = 0;

    cout << search(nums,target) << endl;

    return 0;
}