// this program prints the reverse triangle pattern of char using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j;

    for(i=0;i<4;i++) {
        char ch='A'+i;
        for(j=i+1;j>0;j--) {
            cout<< ch;
            ch--;
        }
        cout<<endl;
    }

    return 0;
}