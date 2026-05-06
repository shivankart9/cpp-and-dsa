// this program explain us how max element function works
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {3,4,5,2,6};
    
    cout << "max element = " <<  *(max_element(vec.begin(),vec.end())) << endl;

    return 0;
}