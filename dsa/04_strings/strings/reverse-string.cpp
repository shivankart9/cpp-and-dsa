// in this program we will reverse string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s = "shivankar";

    reverse(s.begin(),s.end());

    cout << s << endl;

    return 0;
}