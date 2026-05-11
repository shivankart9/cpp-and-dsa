// leetcode question 58 legth of last word
#include<iostream>
#include<string>
using namespace std;

int length(string s) {
    int count = 0;
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] != ' ') {
            count++;
        }
        if(s[i] == ' '&&count > 0) {
            break;
        }
    }

    return count;
}

int main() {
    string s = "hello this is   shivankar    ";

    cout << "length of last word is : " << length(s) << endl;

    return 0;
}