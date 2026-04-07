// this program removes the duplicate element from the array
// leetcode 26 - remove duplipate elements from array
#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int>& nums) {
    if(nums.empty()) {
        return 0;
    }
    int k = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] != nums[i-1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> nums = {1,2,3,3,8,9,9};
    int k = removeduplicates(nums);

    cout << "array after removed duplicate elements: " ;
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}