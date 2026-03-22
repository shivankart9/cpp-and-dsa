// this program prints the sum of digits a number using for loop
#include<iostream>
using namespace std;

// creating function 
int func(int n) {
    int digitsum=0,i,lastdigit;
    for(i=n;i>0;i=i/10) {
        digitsum += i%10;
    }

    return digitsum;
}

int main() {
    cout<<func(145);
    return 0;
}