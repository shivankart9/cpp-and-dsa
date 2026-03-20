// this program create a fumction for printing the sum of n numbers
#include<iostream>
using namespace std;

// creating a function;
int sumN(int n) {
    int i,sum=0;

    for(i=1;i<=n;i++) {
        sum += i;
    }

    return sum;
}

int main() {
    cout << "sum =" << sumN(10)<<endl;
    cout << "sum ="<< sumN(5);
    return 0;
}