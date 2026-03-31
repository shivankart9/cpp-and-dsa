// this program explain about pass by reference 
#include<iostream>
using namespace std;

// creating function
void changearr(int arr[] , int size) { // used void as we are not returning anything at last
    for(int i = 0; i < size; i++) {
        arr[i] = 3*arr[i];
    }
}

int main() {
    int arr[] = {1,2,3,4} ;

    changearr(arr , 4) ; // called function

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " "; // 3 6 9 12 the function make the changes in original array
    }

    return 0;
}