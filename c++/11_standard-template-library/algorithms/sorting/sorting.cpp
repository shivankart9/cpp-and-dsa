// this program runs sorting algorithm for sorting and reverse sorting vector and array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int arr[6] = {4,5,6,3,9,0};
    vector<int> vec = {6,4,8,2,3,0};

    // sorting for array
    sort(arr,arr+6);

    cout << "sorting array = " ;
    for(int val : arr) {
        cout << val << " ";
    }

    //reverse sorting for array
    sort(arr,arr+6,greater<int>());
    cout << "reverse sorting array = " ;
     for(int val : arr) {
        cout << val << " ";
    }

    // sorting vector
    sort(vec.begin(),vec.end());
    cout << "sorting vector = " ;
    for(int val : vec) {
        cout << val << " ";
    }

    // reverse sorting vector 
    sort(vec.begin(),vec.end(),greater<int>());
    cout << "reverse sorting vector = " ;
    for(int val : vec) {
        cout << val << " ";
    }

return 0;
}