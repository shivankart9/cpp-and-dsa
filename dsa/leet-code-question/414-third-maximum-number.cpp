// this is leet code question 414 third maximum number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thirdmaximum(vector<int>& nums) {
    sort(nums.begin(),nums.end());

    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    int n = nums.size();
   
        if(n < 3) {
            return {nums[n-1]};
        } else {
            return {nums[n-3]};
        }
}

int main() {
    vector<int> nums = {3,2,1};

    cout << thirdmaximum(nums) << endl;

    return 0;
}