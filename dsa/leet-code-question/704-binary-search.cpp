// in this program we are given a target from an array which we have to give index of target if target not present array return -1 using binary search
// leetcode 704-binaray search
// array is in ascending order
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binarysearch(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;
    while(st<=end) {
        int mid = (st + end) / 2; // more effecient mid = st + (end - st)/ 2 . it is more  efficent if by  chance the value of st and end becomes INT_MAX so the code can overflow
        if(target > nums[mid]) {
            st = mid + 1;
        } else if(target < nums[mid]) {
            end = mid - 1;
        } else {
            return mid ;// ans
        }
     }
    return -1;
}

int main() {
    vector<int> nums = {-1,0,3,4,5,9,12};
    int target = 9;

    cout << binarysearch(nums,target) << endl;

    return 0;
}
