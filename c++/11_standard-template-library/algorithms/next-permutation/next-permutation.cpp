// this program explain us how next permutation works
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string s = "abc";

    // next permutation
    next_permutation(s.begin(),s.end());
    cout << "next permutation : " << s << endl;
    
    // previous permutation
    prev_permutation(s.begin(),s.end());
    cout << "previous permutation : " << s << endl;

    return 0;
}