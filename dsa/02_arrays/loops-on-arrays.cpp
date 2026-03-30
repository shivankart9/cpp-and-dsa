// this program prints the all data of an array using loop
#include<iostream>
using namespace std;

int main() {
    int marks[5] = {100,80,78,90,45};

    for(int i = 0; i < 5; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}