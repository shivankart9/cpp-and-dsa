// null operators = a pointer that does not point to any location
#include<iostream>
using namespace std;

int main() {
    int* ptr = NULL ; // stored null in it so it give zero otherwise this stores random address

    cout << ptr << endl; // this cannot be dereference

    return 0;
}