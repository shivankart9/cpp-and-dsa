// this program creates a program for fibonacci
#include<iostream>
using namespace std;

// creating function
int fibonacci(int n) {
    if (n == 0) return 0;
    if(n == 1) return 1;

    int a=0;
    int b=1;
    int next;

    for(int i=2;i<=n;i++) {
        next = a+b;
        a=b;
        b=next;
    }

    return b;
}

int main() {
    int n=6;
    cout<<n<<"th fibonacci is : "<<fibonacci(n)<<endl;
    return 0;
}