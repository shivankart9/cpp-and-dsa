// this program explain us the concept of exclusive OR operator ( XOR )
#include<iostream>
using namespace std ;

int main() {
    int a = 4 , b = 8 , c = 3 , d = 7;

    cout << (a^b) << endl; // 0100 ^ 1000 = 1100 = 12 
    cout << (c^d) << endl; // 011 ^ 111 = 100 = 4
    return 0;
}

// difference b/w xor , or is that in xor if bit are same so that means 0 and if bits are different that means 1
// in or if bit is 0 | 0 then only it says it is 0 other wise it is 1