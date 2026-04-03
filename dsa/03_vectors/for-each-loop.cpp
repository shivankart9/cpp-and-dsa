// this program explain the concept of vector loop
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec(5,1);
    vector<char> vec1 = {'a','b','c','d'};

    for(int val : vec) { // we used val instead of i 
        cout << val << " ";
    }

    for(char val : vec1) {
        cout <<val << " ";
    }
    

    return 0;
}