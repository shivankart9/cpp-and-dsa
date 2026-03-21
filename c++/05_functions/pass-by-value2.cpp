// this program explains the  concept of pass by value
#include<iostream>
using namespace std;

int changex(int x) {
    x = 2*x;
    cout << "x = " << x << endl;
}

int main() {
    int x = 5;
    changex(x);

    cout<< "x = " << x << endl;
    return 0;
}