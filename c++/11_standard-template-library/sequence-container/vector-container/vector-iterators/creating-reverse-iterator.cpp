// this program tells us how to create reverse iterator
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    // creating reverse iterator
    vector<int>::reverse_iterator it; // we can write auto directly inside for loop (auto it = vec.rbegin(); it != rend(); it++)

    for(it = vec.rbegin(); it != vec.rend(); it++) {
        cout << *(it) << " ";
    }

    return 0;
}