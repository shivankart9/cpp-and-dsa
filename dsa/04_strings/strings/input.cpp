// this program tells us how to input 
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "enter your name: " ; // dynamic =  runtime size
    getline(cin,str); // we use getline function instead for just cin because cin stops storing after the space

    cout << "your name is : " << str << endl;

    return 0;
}