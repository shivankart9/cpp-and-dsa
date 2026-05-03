// multisets can store duplicate elements, and they are ordered by default
#incude<iostream> 
#include<map>
using namespace std;

int main() {
    multiset<int> s;

    // to store elements
    s.emplace(6);
    s.insert(6);
    s.emplace(8);
    s.insert(8);

    for(auto val : s) {
        cout << val << endl;
    }

    return 0;
}

// other functions are similar to map functions
// like : count,erase,find,size,empty
