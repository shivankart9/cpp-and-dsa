//using loop in string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "shivankar tiwari";

    for(int i = 0; i < s.length(); i++) { // also we can write for(char ch : s) {cout << ch << " ";}
        cout << s[i] << " ";
    }

    return 0;
}