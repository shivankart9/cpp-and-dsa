// this explains itarators in vectors

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4};

    cout << *(vec.begin()) << endl; // begin itertor this point out the first value
    cout << *(vec.end()) << endl; // end iterator this do not point to the last element this point out to the garbage value means after the value just after last index

    return 0;
}