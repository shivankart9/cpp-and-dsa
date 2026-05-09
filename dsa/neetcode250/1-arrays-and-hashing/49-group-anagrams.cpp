// leetcode 49 group anagrams
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<vector<string>> groupanagrams(vector<string>& str) {
    unordered_map<string, vector<string>> m;
    vector<vector<string>> ans;
    for(auto val : str) {
        string s = val;
        sort(s.begin(),s.end());
        m[s].push_back(val);
    }
    for(auto val : m) {
        ans.push_back(val.second);
    }

    return ans;
}

int main() {
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result = groupanagrams(str);

    for(auto group : result) {
        cout << "[ " ;
        for(auto word : group) {
            cout << word << " ";
        }
        cout << " ]" ;
    }

    return 0;
}