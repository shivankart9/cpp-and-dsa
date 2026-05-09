// leetcode 14 longest common prefix
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string commonprefix(vector<string>& str) {
    if(str.empty()) return "";
    string s;
    string st = str[0];

    for(int i = 0; i < st.size(); i++) {
        for(int j = 0; j < str.size(); j++) {
           if (st[i] != str[j][i]){
                return s;
            }
        }
        s += st[i];
    }

    return s;
}

int main() {
   vector<string> str = {"shivankar","shivam","shivsakti"};
    string result = commonprefix(str);

    for(auto val : result) {
        cout << val  ;
    }

    return 0;
}