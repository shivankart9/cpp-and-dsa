// pointers = special variables that store address of other variables
#include<iostream>
using namespace std;

int main() {
    int a = 10;
    // creating a pointer . if a is store in int so we have to create pointer of int and if float so float etc. adding '*' is imp
    int* ptr = &a; // '&' is a operator which gives the address 

    cout << ptr << endl; // printing the value of ptr which is equal to the address of the &a
    cout << &a << endl; // printing the address of &a
    cout << &ptr << endl; // printing the address of ptr

    return 0;
}