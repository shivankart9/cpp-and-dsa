// sets store unique values only and store them in sorted order
#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;

    // to add values
    s.insert(7);
    s.emplace(1);
    s.insert(5);
    s.emplace(10);

    // lower bound functions = should not less than key
    cout << "lower bound = " << *(s.lower_bound(1)) << endl; // it will return 1 but if 1 didn't exist so it would have returened just larger value than that if larger values also did not exist it returns 0

    // upper bound functions = should be greater than key 
    cout << "uper bound = " << *(s.upper_bound(5)) << endl; // it will return 7. returns just grater value 
    
    for(auto val : s) {
        cout << val << " ";
    }

    return 0;

}

// other functions are similar to map functions
// like : count,erase,find,size,empty
