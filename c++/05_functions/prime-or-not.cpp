// this program prints wheather  the number is prime or not
#include<iostream>
using namespace std;

// creating a fumction
int prime(int n) {
    int i,x;
    for(i=2;i<=(n-1);i++) {
        x == (n%i == 0) ;
    }

        if (x) {
            cout<<"it is not prime number";
        } else {
            cout<<"it is prime number";
        }
    
}

int main() {
    prime(6);
    return 0;
}