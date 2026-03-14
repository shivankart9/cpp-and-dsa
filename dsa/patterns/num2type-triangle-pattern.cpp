// this program prints the triangle pattern of numbers using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j;

    for(i=0;i<4;i++) {
        int num=1;
        for(j=0;j<i+1;j++) {
            cout<<num;
            num++;
        }
        cout<<endl;
    }

    return 0;
}