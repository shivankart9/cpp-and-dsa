// this program return pair with target sum using 2 pointer approach
// only works for sorted arrays
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>& nums, int target) {
    int i = 0, j = nums.size()-1;
    while(i<j) {
        int pairsum = nums[i] + nums[j] ;
        if(pairsum > target) {
            j--;
        } else if(pairsum < target) {
            i++;
        } else {
            cout << nums[i] << " " << nums[j] ;
            break;
        }
    }
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    
    cout << "the pair is " ;
    pairsum(nums,target);

    return 0;
}