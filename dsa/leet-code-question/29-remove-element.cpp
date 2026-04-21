// this program remove the targeted element from array/vector
// leetcode 29 remove element 
#include<iostream>
#include<vector>
using namespace std;

int remove_element(vector<int>& nums,int val) {
    int k = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> nums = {2,3,3,2};
    int val = 2, k = remove_element(nums,val);

    cout << "the final vector is : " ;
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;

}