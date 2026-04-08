// this program prints true if there is any duplicate of a number other wise it prints false
// leetcode 217 - contains duplicate
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsduplicate(vector<int>& nums) {
    if(nums.empty()) {
        return false;
    }
    sort(nums.begin(),nums.end());
    for(int i = 1 ; i < nums.size(); i++) {
        if(nums[i] == nums[i-1]) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {2,3,4,5};

    cout << "there is  duplicate : " << boolalpha << containsduplicate(nums) << endl;

    return 0;
}