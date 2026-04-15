// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.
// leetcode 66 plus one
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> plusone(vector<int>& digits) {
    for(int i = digits.size()-1; i >= 0; i--) { // here we run loop in decrement so the last element can come at first
        if(digits[i] < 9) { // if element is less than 9 so add 1
            digits[i] += 1;
            return digits; // here we return so addition just done for the last element
        } else {
            digits[i] = 0; // if element is 9 so input 0 there 
        }
    }
    digits.insert(digits.begin(),1); // add 1 at begin if loops ends and  there are all 9 nums
    return digits; 
}

int main() {
    vector<int> digits = {1,2,3};
    vector<int> result = plusone(digits);

    cout << "[ ";
    for(int ans : result) {
        cout << ans << " ";
    }
    cout << "]";

    return 0;
}
 