// this program explain how pass by reference works using pointers 
#include<iostream>
#include<vector>
using namespace std;

void change(int *ptr) {
    *ptr = 20;
}

int main() {
    int a = 10;

    change(&a);
    cout << "inside main function: " << a << endl;//20

    return 0;
}