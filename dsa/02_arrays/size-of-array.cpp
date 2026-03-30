// this program prints the size of array
#include<iostream>
using namespace std;

int main() {
    int marks[5] = {90,89,78,43,21};

    cout << sizeof(marks) << endl; // size of array in terms of bit 
    cout << sizeof(marks) / 4 <<endl; // 20/4 = 5 , 1byte = 4bit

    return 0;
}