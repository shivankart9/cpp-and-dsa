// In this program every element appears twice except one . this program returns that element
// leetcode 840 single element in sorted array
// binary search
#include<iostream>
#include<vector>
using namespace std;

int uniqueelement(vector<int>& nums) {
    int st = 0, end = nums.size() - 1;

    while(st <= end) {
            int mid = st + (end - st) / 2;

            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid+1]) {
                return (nums[mid]);
            }

            if(mid % 2 == 0) { // even 
                if(nums[mid] == nums[mid - 1]) { // left side 
                    end = mid - 1;
                } else { // right side
                    st = mid + 1;
                }
            } else { // odd 
                if(nums[mid] == nums[mid - 1]) { // right side 
                    st = mid + 1;
                } else { // left side
                    end = mid - 1;
                }
            }
        }
        return 0;
    }

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout << "unique element : " << uniqueelement(nums) << endl;

    return 0;
}

