// there is a sorted array given . in this program we have to return the index if the target is found
// if notfound return the index where it would be if it were inserted in order
// leetcode 35 search insert position
// less optimised
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int searchinsert(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            return i;
        } else {
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            for(int j = 0; j < n+1; j++) {
                if(nums[j] == target)  {
                    return j;
                }
            }
        }
    }
    return 0;
}

int main() {
    vector<int> nums = {1,3,5,6} ;
    int target = 5;

    cout << "the index is : " << searchinsert(nums,target);

    return 0;
}