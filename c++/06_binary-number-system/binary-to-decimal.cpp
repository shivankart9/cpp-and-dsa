// this program converts the binary number to decimal numbers
#include<iostream>
using namespace std;

int main() {
     int rem,binnum,ans=0,pow=1;//2^pow
     cout<<"enter the binary number(only in 0 and 1) to convert to decimal :";
     cin>>binnum;

     while(binnum>0) {
        rem = binnum%10;
        binnum = binnum/10;
        ans = ans + (rem * pow);
        pow = pow*2;
     }
     cout<<"the decimal number is : "<<ans<<endl;

     return 0;
}