// this programs tells whether enter character  is lower case or uppercase
#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter a charcter : ";
    cin>>ch;

    if (islower(ch)){
        cout<<"entered character is lowercase"<<endl;
    } else if (isupper(ch)){
        cout<<"entered character is uppercase"<<endl;
    } else {
        cout<<"wrong input"<<endl;
    }

    return 0;
}