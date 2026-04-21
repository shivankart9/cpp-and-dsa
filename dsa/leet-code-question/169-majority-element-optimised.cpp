// this is the solution of 136 majority element leet code question this solution is more optimised
#include<iostream>
#include<vector>
#include<algorithm> // used for using sort
using namespace std;

int majorityelement(vector<int>& nums) {
    sort(nums.begin(),nums.end()); // for sorting array

    int freq = 1;
    int ans = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        } else{
            freq = 1;
            ans = nums[i];
        }
        if (freq > nums.size()/2) {
        return ans ;
     }
    }
}

int main() {
    vector<int> nums = {1,2,2,1,1};
    
    cout << "the majority element is :  " << majorityelement(nums) << endl;

    return 0;
}