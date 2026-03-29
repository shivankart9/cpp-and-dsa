// this pogram prints the pyramid pattern of  num using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j;

    for(i=0;i<4;i++) {
        int num=1;
        // spaces
        for(j=(4-i);j>0;j--) {
            cout<<" ";
        }
        // num1
         for(j=0;j<=i;j++) { // we can write (j=1;j<=i+1;j++) and directly print j without taking variable num
            cout<<num;
            num++;
        }
        // num2
        for(j=i;j>0;j--) {
            cout<<j;
        }
        cout<<endl;
     }

    return 0;
}