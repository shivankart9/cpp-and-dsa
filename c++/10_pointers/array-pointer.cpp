// when we create an array so the variable is already a pointer which stores the address of the first element of the array
// it is a constant pointer its value can not be changed
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};

    cout << arr << endl; //prints the address of first element 
    cout << *arr << endl; // prints the first value of array

    return 0;
}