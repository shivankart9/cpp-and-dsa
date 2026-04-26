// this program tells us how to create iterator
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    // creating iterator
    vector<int>::iterator it; // we can write auto directly inside for loop then we do not need to type this

    for(it = vec.begin(); it != vec.end(); it++) { // loop using iterator (auto it = vec.begin; it != vec.end(); it++)
        cout << *(it) << " ";
    } 

    return 0;
}