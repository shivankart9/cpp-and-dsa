// this program tells weather the number is power of two or r not without using loop with the help of bitwise operator
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of two" << endl;
    } else {
        cout << num << " is not a power of two" << endl;
    }

    return 0;
}
// example num= 8 = 1000
// (num - 1) = 7 = 0111 
// so 1000 & 0111 = 0000
