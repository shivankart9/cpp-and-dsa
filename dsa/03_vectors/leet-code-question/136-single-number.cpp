/*
    LeetCode 136: Single Number
    Link: https://leetcode.com/problems/single-number/description/
    Difficulty: Easy
    Topic: Vectors / Bit Manipulation
*/
// this code is actual answer as in question  there is written we have to this  with a linear runtime  complaxity 

#include<iostream>
#include<vector>
using namespace std;

int singlenumber(vector<int>& nums) {
    int unique = 0;
    for(int val: nums) {
        unique ^= val ; // used bitwise xor ex = 0^4^1^2^1^2 = 4 as 4^0 = 4, 1^1 = 0, 2^2 = 10 ^ 10 = 0
    }

    return unique;
}

int main() {
    vector<int> nums = {4,1,2,1,2};

    cout << "the unique value is : " << singlenumber(nums) << " " ;

    return 0;
}
