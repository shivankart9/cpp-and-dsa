// leetcode 242 valid anagram
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isanagram(string s, string t) {
    if(s.size() != t.size()) return false;
    sort(s.begin(),s.end());
    
    sort(t.begin(),t.end());

    if(s == t) {
        return true;
    }
    return false;
}

int main() {
    string s = "shivankar";
    string t = "ankarshiv";

    cout << isanagram(s,t) << endl;

    return 0;
}