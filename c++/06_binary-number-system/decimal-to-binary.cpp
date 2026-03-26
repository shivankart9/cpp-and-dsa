// this program converts decimal number to binary number
#include<iostream>
using namespace std;

int main() {
    int ans = 0,rem,decnum,pow=1;
    cout<<"enter decimal number to convert to binary: " ;
    cin>>decnum;

    cout<<"the binary number of "<<decnum<<" is ";
    while(decnum>0) {
        rem = decnum%2;
        decnum = decnum/2;

        ans += (rem*pow);
        pow = pow*10;
    }
    cout<<ans<<endl;

    return 0;
}
