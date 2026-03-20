// this program create function for n number of factorial 
#include<iostream>
using namespace std;

// creating the function
int Nfactorial(int n) {
    int i,factorial =1;
    for(i=1;i<=n;i++) {
        factorial = factorial * i;
    }

    return factorial;
}

int main() {
    cout << "factorial = "<<Nfactorial(4);

    return 0;
}