// count set bits counts the bits in which 1 came . this is mostly used in competitive programming and thus only works in gcc compiler
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int num = 15;

    cout << "set bits in num are : " << __builtin_popcount(num) << endl;

    return 0;
}
// for long int __builtin_popcountll()
// for long long int __builtin_popcountll()