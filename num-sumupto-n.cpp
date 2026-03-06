// this program gives the sum of number upto the user want using for loop
#include<iostream>
using namespace std;
int main() {
    int i,n,sum=0;
    cout<<"upto where you want sum of numbers: ";
    cin>>n;
    
    for(i=1;i<=n;i++) {
       sum += i ; 
    }
    cout<< sum << endl;

    return 0;
}