// the pointer add and subtract works similar as increment and decrement
// if you add ptr+1 = 1 int (add 4 byte space to address). if ptr + 3 = 3 int (add 12 byte space to address)
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4};
    int* ptr = arr; // no need of adding & as  arr is consider as pointer only it stores index of 0th index

    cout << "no changes : " << ptr << endl; // give address of 0 index num
    cout <<"added 1 int: " << ptr + 1 << endl; // moves forward by 4byte and give address of 1 index num

    return 0;
}