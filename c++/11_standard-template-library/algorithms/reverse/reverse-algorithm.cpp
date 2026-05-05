// this program explain us how reverse algorithm works. reverse algorithm reverse the value
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin(),vec.end());

    for(int val : vec) {
        cout << val << " " ;
    }

    return 0;
}
