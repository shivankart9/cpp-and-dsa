// this program explains the  concept of pass by value
#include<iostream>
using namespace std;

int changex(int x) {
    x = 2*x;
    cout << "x = " << x << endl; //10
}

int main() {
    int x = 5;
    changex(x);

    cout<< "x = " << x << endl; //5
    return 0;
}