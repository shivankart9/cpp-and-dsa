//this program tells  whether the entered number is positive or negative
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number : ";
    cin>>n;

    if (n>=0) {
        cout<<"the entered number is  positive"<<endl;
    }else {
        cout<<"the entered number is negative"<<endl;
    }

    return 0;
}