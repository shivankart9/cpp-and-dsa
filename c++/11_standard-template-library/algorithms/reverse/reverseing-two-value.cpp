// this program reverse two values
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin()+1,vec.begin()+3);

    for(int val : vec) {
        cout << val << " ";
    }

    return 0;
}