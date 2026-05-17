// leetcode 12 integer to roman
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string inttoroman(int num) {
    vector<pair<int,string>> roman = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"x"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    
    string ans = "";

    for(auto i = 0; i < roman.size(); i++) {
        while(num > roman[i].first) {
            ans += roman[i].second;
            num -= roman[i].first;
        }
    }

    return ans;
}

int main() {
    int num;
    cout << "enter integer to convert to roman : " ;
    cin >> num;

    cout << "In roman the integer is : " << inttoroman(num) << endl;

    return 0;
}