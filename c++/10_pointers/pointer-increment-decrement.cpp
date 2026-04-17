// in pointer increment(++) and decrement(--) do not make changes in value they make changes in the address stored in a pointer
// ++ = increase address by 4 byte , -- = decrease address by 4 byte
// address in stored in hexadeciaml after 9 a comes and goes upto f 
#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << "address before no use of ++,-- : " << ptr << endl;
    ptr++;
    ptr++; 
// CAUTION: ptr now points to an unknown memory location.
// Do NOT use *ptr (dereferencing) here, or the program might crash!

    cout << "address after using increment(++) : " <<  ptr << endl;
    ptr--;
    cout << "address after using decrement(--) : " << ptr << endl; // this return the address of before as it will minus the added 4 byte

    return 0;
}