// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// leet code 268 missing number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingnum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0; i < n; i++) {
        if(i != nums[i]) {
            return i;
        }
    }
    return n;
}

int main() {
    vector<int> nums = {3,2,1};

    cout << "missing  number is :  " << missingnum(nums) << endl;

    return 0;
}
