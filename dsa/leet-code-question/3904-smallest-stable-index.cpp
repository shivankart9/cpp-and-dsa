// 3903/3904 smallest stable index I&II, these both have just constraint difference first one can be done by brute force but second one need to be done by suffix and prefix
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int smalleststableindex(vector<int>& nums, int k) {
    int n = nums.size();
    if(n == 0) {
        return 0;
    }

    vector<int> suffixmin(n);
    suffixmin[n-1] = nums[n-1];

    for(int i = n-2; i >= 0; i--) {
        suffixmin[i] = min(nums[i],suffixmin[i+1]);
    }

    int currmax = INT_MIN;
    for(int i = 0; i < n; i++) {
        currmax = max(nums[i],currmax);

        if(currmax - suffixmin[i] <= k) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {3,2,1};
    int k = 1;

    cout << smalleststableindex(nums,k) <<endl;

    return 0;
}
    