// this  program prints the floyd triangle pattern using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j,num=1;

    for(i=0;i<4;i++) {
        for(j=1;j<=i+1;j++) { //also we can write for(j=i+1;j>0;j--)
            cout <<num;
            num++;
        }
        cout << endl;
    }

    return 0;
}