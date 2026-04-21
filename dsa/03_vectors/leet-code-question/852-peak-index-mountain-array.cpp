// this program return the index of the peak element
// leetcode 852 peak index in mountain array
// O(logn) time complexity
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int peakindex(vector<int>& arr) {
    int st = 0, end = arr.size() - 1;

    while(st <= end) {
       int mid = st + (end - st)/2;

        if(arr[mid+1] < arr[mid] && arr[mid] > arr[mid-1]) {
            return mid;
        }else if(arr[mid+1] > arr[mid]) {
            st = mid + 1;
        }else {
            end = mid - 1;
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {0,3,8,9,5,2};

    cout << "the index of the peak element is : " << peakindex(arr) << endl;

    return 0;
}