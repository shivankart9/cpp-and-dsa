// this program prints the inverted triangle pattern of num using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j,k;

    for(i=0;i<4;i++) {
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<(4-i);j++) {
            cout<<i+1;
        }
        cout<<endl;
    }

    return 0;
}