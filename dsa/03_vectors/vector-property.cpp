// this program explain us the property of vector of size and capacity that how capacity get x2 when there is no space
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;// here we have not given any size means it has zero capacity now

    vec.push_back(0); // capacity becomes 1 
    vec.push_back(3); // capacity becomes 2 here it gets 1x2
    vec.push_back(4); // capacity becomes 4 here it gets 2x2

    cout << "size = " << vec.size() << endl; // 3
    cout << "capacity = " << vec.capacity() << endl; // 4

    vec.push_back(6);
    vec.push_back(7);

    cout << "size = " << vec.size() << endl; // 5
    cout << "capacity = " << vec.capacity() << endl; // 8


    return 0;
}