// leetcode 169 majority element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority_element(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    return (nums[nums.size()/2]); // when we sort vector so its 100 percent that the centre element will be majority element as in question it is written majority element always exist and it always comes more tha n/2 time
}

int main() {
    vector<int> nums = {3,2,3};

    cout << majority_element(nums);

    return 0;
}