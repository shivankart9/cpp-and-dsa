// this program prints the inverted triangle of character
#include<iostream>
using namespace std;
int main() {
    int i,j;
    char ch='A';

    for(i=0;i<4;i++) {
        for(j=0;j<i;j++) {
            cout<<" ";
        }
        for(j=0;j<(4-i);j++) {
            cout<<ch;
            
        }
        ch++;
        cout<<endl;
    }

    return 0;
}