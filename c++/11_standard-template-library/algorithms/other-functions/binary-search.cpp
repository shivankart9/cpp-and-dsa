// this program explain us how binary search function works
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {2,3,4,5,9};
    int target = 4;
    
    cout << "return true or false for target : " << binary_search(vec.begin(),vec.end(),target) << endl;

    return 0;
}