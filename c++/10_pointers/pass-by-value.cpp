// this program explain us how pass by value works 
#include<iostream>
#include<vector>
using namespace std;

void change(int a) { //pass by value it becomes pass by reference  if we add & in starting
    a = 20;
}

int main() {
    int a = 10;
    change(a);

    cout << "inside main: " << a << endl; // it will give answer 10

    return 0;
}