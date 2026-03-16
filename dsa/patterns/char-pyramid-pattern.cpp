// this program prints the pyramid pattern of char using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j;

    for(i=0;i<4;i++) {
        char ch='A',ch1='A'+ i-1;
        for(j=(5-i);j>0;j--) {
            cout<<" ";
        }
        for(j=0;j<=i;j++) {
            cout<<ch;
            ch++;
        }
        for(j=i;j>0;j--) {
            cout<<ch1;
            ch1--;
        }
        cout<<endl;
    }
}