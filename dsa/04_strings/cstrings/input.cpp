// this program explain us how to input in strings
#include<iostream>
using namespace std;

int main() {
    char str[100]; // for input we have decide limit first

    cout << "enter string to input : " ;
    cin.getline(str,100);// we use getline function instead for just cin because cin stops storing after the space

    cout << "entered string is : " << str << endl;

    return 0;
}