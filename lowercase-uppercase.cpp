// this programs tells whether enter character  is lower case or uppercase
#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter a charcter : ";
    cin>>ch;

    if (islower(ch)){ // other condition : (ch>='a' && ch<='z') , ()
        cout<<"entered character is lowercase"<<endl;
    } else if (isupper(ch)){ // other condition : (ch>='A' && ch<='Z')
        cout<<"entered character is uppercase"<<endl;
    } else {
        cout<<"wrong input"<<endl;
    }

    return 0;
}