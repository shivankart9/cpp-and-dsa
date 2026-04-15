// storing the address of a pointer to another pointer 
#include<iostream>
using namespace std;

int main() {
    float price = 399.78;
    float* ptr = &price;
    float** ptr2 = &ptr; // used two '*' to store a pointer 

    cout << &ptr << endl; // printing the address of pointer 1
    cout << ptr2 << endl; // printing the value (address of pointer1) of pointer 2

    return 0;
}