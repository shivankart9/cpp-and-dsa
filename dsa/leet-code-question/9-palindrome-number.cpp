// leetcode 9 palindrome number
#include<iostream>
#include<vector>
using namespace std;

bool numpalindrome(int num) {
    if(num < 0) return false;
    vector<int> vec;

    while(num != 0) {
        vec.push_back(num % 10);
        num = num / 10;
    }
    int st = 0, end = vec.size() - 1;
    while(st < end) {
        if(vec[st] != vec[end]) {
            return false;
        } else {
            st++;
            end--;
        }
    }

    return true;
}

int main() {
    int num = 151;

    cout << numpalindrome(num) << endl;

    return 0;
}