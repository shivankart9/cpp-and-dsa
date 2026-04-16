// this explains how dereference works '*'. this operator prints the exact value
#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    int** ptr2 =  &ptr;

    cout << *ptr << endl;
    cout << *(&a) << endl;
    cout << *ptr2 << endl; // one  time derefernece it  will give output of address which is  store in first pointer
    cout << **ptr2 << endl; // two times dereference it will give the value stored in a

    return 0;
}