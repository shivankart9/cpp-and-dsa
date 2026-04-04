// this program is of linear search but we solved this with vector
#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector<int>& vec, int target) {
    for(int val = 0; val < vec.size(); val++) {
        if(target == vec[val]) {
            return val;
        }
    }

    return -1;
}

int main() {
    vector<int> vec = {4,5,6,7,8} ;
    int target = 8;

    cout << "the index of the target is  : " << linearsearch(vec,target) ;

    return 0;
}