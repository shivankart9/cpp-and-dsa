// this program create function and her we have return the integer value as well
#include<iostream>
using namespace std;

// creating a funtion
int printhello() {
    cout<<"hello"<<endl;
    return 3;
}
int main() {
    int val= printhello(); // return value got stored in val 
    cout<< "value = " <<val<<endl;

    // also we can do this directly
    cout<< printhello() <<endl;

    return 0;
}