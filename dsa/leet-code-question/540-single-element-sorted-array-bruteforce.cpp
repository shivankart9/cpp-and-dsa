// In this program every element appears twice except one . this program returns that element
// leetcode 840 single element in sorted array
// brute force
#include<iostream>
#include<vector>
using namespace std;

int uniqueelement(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        int count = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }
            if(count == 1) {
                return (nums[i]);
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout << "unique element : " << uniqueelement(nums) << endl;

    return 0;
}
