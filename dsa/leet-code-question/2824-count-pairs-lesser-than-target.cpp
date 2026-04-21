// this program prints the count number of pair of array 
// leetcode question 2824 count-pairs-whose-sum-is-less-than-target
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countpairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[i]+nums[j] < target ) {
                    count ++;
                }
            }
        }
        return count;
    }

int main() {
    vector<int> nums = {-1,1,2,3,1};
    int target = 2;

    cout << "the total pairs which are lesser than target are : " << countpairs(nums,target)  <<endl;

    return 0;
}
