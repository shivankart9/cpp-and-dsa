// leetcode 7 reverse integer 
#include<iostream>
#include<climits> // for INT_MIN,INT_MAx
using namespace std;

int reverseint(int num) {
    int ans = 0;
    while(num != 0) {
        if(ans < INT_MIN / 10 || ans > INT_MAX / 10) {
            return 0;
        }
        ans = ans*10 + num%10;
        num /= 10;
    }

    return ans;
}

int main() {
    int num = 67893;

    cout << reverseint(num) << endl;

    return 0;
}