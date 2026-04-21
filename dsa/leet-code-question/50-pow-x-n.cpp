// this program calculates the value of x^n using binary exponentiation 
// leet code 50 - pow(x,n)
#include<iostream>
#include<vector>
using namespace std;

double mypow(double x, int n) {
    long binform = n; // use long to avoid overflow if n = INT_MIN
    // handle if exponent is negative 
    if(n < 0) {
        x = 1/x;
        binform = -binform;
    }
    double ans = 1;
    // binary exponentiation 
    while (binform > 0) {
        if(binform % 2 == 1) { // if current bit is 1 multiply ans by current pow of x
            ans *= x;
        }
        x *= x; //square the base  for the next bit position
        binform /= 2; // move to next bit 
    }
    return ans;
}

int main() {
    double x = 2;
    int n = 4;

    cout << mypow(x,n) << endl;

    return 0;
}