// leetcode 13 roman to integer
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romantoint(string s)
{
    int ans = 0;
    unordered_map<char, int> map;
    map.emplace('I', 1);
    map.emplace('V', 5);
    map.emplace('X', 10);
    map.emplace('L', 50);
    map.emplace('C', 100);
    map.emplace('D', 500);
    map.emplace('M', 1000);

    for(int i = 0; i < s.size(); i++) {
        if(i+1 < s.size() && map[s[i]] < map[s[i+1]]) {
            ans = ans - map[s[i]];
        } else {
            ans = ans + map[s[i]];
        }
    }

    return ans;
}

int main() {
    string s;
    cout << "enter roman number : " ;
    getline(cin,s);

    cout << romantoint(s);

    return 0;
}