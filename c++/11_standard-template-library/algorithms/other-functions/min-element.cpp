// this program explain us how min element function works
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {3,4,5,2,6};
    
    cout << "min element = " <<  *(min_element(vec.begin(),vec.end())) << endl;

    return 0;
}