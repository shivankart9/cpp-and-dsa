// this program prints the majority element  . majority element = n/2
// leetcode 169 majority element
// by brute force approach
#include<iostream>
#include<vector>
using namespace std;

int majorityelement(vector<int>& nums) {
    for(int val : nums) {
        int freq = 0;

        for(int el : nums) {
            if(el == val) {
                freq++;
            }
        }
        if(freq > nums.size()/2) {
            return val;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1,2,2,1,1};
    int result =  majorityelement(nums);
    
    cout << "the majority element is :  " << result ;
   

    return 0;
}