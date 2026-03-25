// this program prints the prime number 
#include<iostream>
using namespace std;

// creating function
int primenum(int n) {
    int i,j;
    for(i=2;i<=n;i++) {
        bool isprime = true;
        for (j=2;j * j<=i;j++) {
            if(i%j == 0) {
                isprime =false;
                break;
            }
        }
       if (isprime) {
        cout<< i << " ";
       }
    }
    cout<<endl;
    
}

int main() {
    primenum(10) ;
    return 0;
}