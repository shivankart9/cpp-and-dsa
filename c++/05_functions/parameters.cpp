// this program prints the sum of two number and min of two number by creating  there function also including parrameter
#include<iostream>
using namespace std;

// sum of two number
int sum(int a, int b) {
    int s=a+b;
    return s;
}

// min of two number
int min(int a , int b) {
    if(a>b) {
        return b;
    } else if(b>a) {
       return a;
    } else {
        cout<< "both are equal";
    }
}

int main() {
    cout <<"sum =" << sum(5,10)<<endl;
    cout<< "minimum= " << min(3,8);

    return 0;
}
