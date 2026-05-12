// leetcode 20 valid parentheses 
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isvalid(string s) {
    stack<char> st;
    for(auto val : s) {
        if(val == '(' || val == '{' || val == '[') {
            st.emplace(val);
        }
        if(val == ')'|| val == '}' || val == ']') {
            if(st.empty()) {
                return false;
            }
            char top = st.top();
            if((val == ')' && top == '(') || 
                (val == '}' && top == '{' ) || 
                (val == ']' && top == '[')) {
                st.pop();
            } else {
                 return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string s = "()[]{}";

    cout << isvalid(s) << endl;

    return 0;
}