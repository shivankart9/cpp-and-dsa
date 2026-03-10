//this program tells whether the entered number is odd or even
#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter a number :";
    cin>>num;

    if(num%2==0) {
        cout<<"the entered number is even"<<endl;
    } else {
        cout<<"the entered number is odd"<<endl;
    }

    return 0;
}