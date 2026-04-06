// this program return the pair in array with target sum by brute force approach 
#include<iostream>
using namespace std;

int main() {
    int arr[4] = {2,7,11,15};
    int targetsum = 9; // this is target 
    for(int i = 0; i < 4; i++) { // run loop for first element 
        for(int j = i + 1; j < 4; j++) { // run loop for second element
            if((arr[i] + arr[j])== targetsum) { // if the sum of first and  second element equal so print those 
                cout << arr[i] << " " << arr[j];
            }
        }
    }

    return 0;
}