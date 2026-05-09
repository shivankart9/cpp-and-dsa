// leetcode 27 remove element
#include<iostream>
#include<vector>
using namespace std;

int remove_element(vector<int>& nums,int val) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int k = remove_element(nums,val);

    cout << k << endl;

    for(int i = 0; i < k; i++) {
        cout << nums[i] <<  " ";
    }

    return 0;

}