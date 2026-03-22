// this program prints the sum of digits using while loop
#include<iostream>
using namespace std;

// creating a function
int func(int num) {
    int digitsum=0,lastdigit;
    while(num>0) {
        lastdigit = num % 10;
        num = num / 10;
        digitsum += lastdigit;
    }
    return digitsum;
}

int main() {
    cout<<"sum = " << func(145);
    return 0;
}