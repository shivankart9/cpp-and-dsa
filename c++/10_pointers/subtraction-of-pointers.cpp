// addition of pointers is  not possible 
// subtraction of pointer is possible only if both pointer are of same type 
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};

    int* ptr2; // 100
    int* ptr1 = ptr2+2; // 108

    cout << ptr1 - ptr2 << endl; // 2

    return 0;
}