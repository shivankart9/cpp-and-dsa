// this programs wheather number is prime or not using for loop
#include<iostream>
using namespace std;
int main() {
    int i,n,x;
    cout<<"enter the number: ";
    cin>>n;

    for(i=2;i<=(n-1);i++) {
       x== (n%i == 0 );
    }
        if (x) {
            cout<<"it is non prime number";
        } else {
            cout<<"it is prime  number";
        }
    

    return 0;
}