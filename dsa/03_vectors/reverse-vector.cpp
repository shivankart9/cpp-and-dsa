// this program prints the reverse vector 
#include<iostream>
#include<vector>
using namespace std;

void printreverse(vector<int> rever) {
    for (int val = rever.size() - 1; val >= 0 ; val--) { 
        cout << rever[val] << " ";
    }
}

int main() {
    vector<int> rever = {4,5,6,7,8};

    cout << "the reverse of the vector is : ";
    printreverse(rever);

    return 0;
}