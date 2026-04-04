/*
    LeetCode 136: Single Number
    Link: https://leetcode.com/problems/single-number/description/
    Difficulty: Easy
    Topic: Vectors / Bit Manipulation
*/
// this code is not actual answer as in question  there is written we have to this  with a linear runtime  complaxity 

#include<iostream>
#include<vector>
using namespace std;


int singlenumber(vector<int>& nums){ // we used '&' this because vector is by default pass by value for making it pass by reference we use '&'
    for(int i : nums) {
        int count = 0;
        for(int j : nums) {
            if(i == j) {
                count ++;
            }
        }
        if (count == 1) {
           return i;
        }
    }
    return -1;
}

int main() {
   vector<int> nums = {3,4,3,4,5};

   cout << "the unique values are : " <<  singlenumber(nums) << " ";
  
   return 0;
}
