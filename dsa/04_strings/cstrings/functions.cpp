// this program uses the function of character strings
#include<iostream>
#include<cstring> // to use functions
using namespace std;

int main() {
    char str[] = {'s','h','i','v','\0'};

    // strlen function to count the length of the string
    cout << "length of string : " << strlen(str) << endl;

    return 0;
}