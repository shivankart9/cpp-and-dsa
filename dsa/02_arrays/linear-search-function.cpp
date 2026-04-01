// this program creates a function for linear search which makes code more efficient
#include<iostream>
using namespace std;

int linearsearch(int arr[] , int sz, int target) {
    for(int i = 0; i < sz; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {2,3,4,1,8,9,0,10} , sz = 8 ,target = 8;

    cout << linearsearch(arr,sz,target);

    return 0;
}