// this program return pair of the target sum using 2 pointer approach
//only works for sorted arrays 
#include<iostream>
using namespace std;

int main() {
    int arr[4] = {2,7,11,15} ;
    int target = 9, i = 0, j = 3; // j =n-1

    while(i < j) {
        int pairsum = arr[i] + arr[j] ; // store pairsum
        if(pairsum > target) { // if pairsum is  greater than the target so position of j move backwards to decrease the sum
            j--;
        }  else if(pairsum < target) { // if pairsum is smaller than the target so position of i move forward to increase the sum
            i++;
        } else { // whnen the pair sum and target becomes equal so we print those pairs 
            cout << "pair found are : " << arr[i] << " " << arr[j];
            return 0; // here we stop the loop when we found our pairs
        }
    }

    cout << "no pair found "; // we print this if there is no pair found 

    return 0;
}