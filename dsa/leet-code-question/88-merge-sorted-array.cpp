// this program prints the merged arrays in descending order
// leetcode 88 merge sort array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergesortarray(vector<int>& nums1, int m , vector<int>& nums2, int n) {
    for(int i = 0; i < n; i++) {
        nums1[m+i] = nums2[i]; // we are overwriting here over zeroes . if we want to use push back than nums1 should not contain m+n size (with zeroes)
    }
    sort(nums1.begin(),nums1.end());
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0,0} , nums2 = {6,5,7,2};
    int m = 3, n = 4;

   mergesortarray(nums1,m,nums2,n) ;

    for(int val : nums1) {
        cout << val << " ";
    }

    return 0;

}
