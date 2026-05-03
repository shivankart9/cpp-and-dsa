// unordered list these can appear in random order
#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    // to insert
    s.insert(7);
    s.emplace(1);
    s.insert(5);
    s.emplace(10);

    for(auto val : s) {
        cout << val << " ";
    }

    return 0;
}