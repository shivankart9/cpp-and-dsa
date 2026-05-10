// leetcode 75 sort colors (without using library function sort ) 
// here also we can use priority queue but this is more efficient as this have only there numbers
#include<iostream>
#include<vector>
using namespace std;

void sortcolors(vector<int>& nums) {
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < nums.size(); i++ ) {
        if(nums[i] == 0) c0++;
        else if(nums[i] == 1) c1++;
        else c2++;
    }
    for(int i = 0; i < nums.size(); i++) {
        if(c0 > 0) {
            nums[i] = 0;
            c0--;
        } else if(c1 > 0) {
            nums[i] = 1;
            c1--;
        } else {
            nums[i] = 2;
            c2--;
        }
    }
}

int main() {
    vector<int> nums = {2,1,1,0,0,2,1};
    sortcolors(nums);
    for(int val : nums) {
        cout << val  << " ";
    }

    return 0;
}