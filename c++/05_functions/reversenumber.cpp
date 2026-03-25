// this program prints the reverse number by creating a function
#include<iostream>
using namespace std;

// creating fiunction
int reversenumber(int n) {
    int lastdigit,ans=0;
    while(n>0) {
        lastdigit = n%10;
        ans =(ans * 10)+lastdigit;
        n = n/10;
    }
    return ans;
}

int main() {
    int n=123;
    cout<<"the reverse is : "<< reversenumber(n)<<endl;
    return 0;
}