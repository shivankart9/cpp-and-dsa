// this program is the answer of leetcode question 169 majority element using moore's voting algorithm 
#include<iostream>
#include<vector>
using namespace std;

int majorityelement(vector<int>& nums) {
    int freq = 0, ans = 0;
    for(int i = 0; i < nums.size(); i++) { // also we can use for(int val : nums) then nums[i] = val
        if(freq == 0) {
            ans = nums[i]; 
        }
        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1,2,2,1,1} ;

    cout << "the majority element is : " << majorityelement(nums) << endl;

    return 0;
}