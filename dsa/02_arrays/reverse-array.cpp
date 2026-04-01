// this program reverse the array also making a function
#include<iostream>
using namespace std;

// creating a function
void reverse(int arr[] , int sz) {
    int start = 0, end = sz - 1;
    
    while(start < end) { // condition applied so loop stops when it fully reverse the array
        swap(arr[start],arr[end]) ; // swap funtion
        start ++ ; 
        end --;
    }
}

int main() {
    int arr[] = {4,2,7,8,1,2,5}, sz = 7;

    reverse(arr,sz);
    cout << "the reverse of array is : " ;

    // using for loop for printing the reverse
    for(int i = 0; i < sz; i++) { 
        cout << arr[i] << " ";
    }

    return 0;
}
