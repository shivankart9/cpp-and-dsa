// this program prints the maximum sum of the subarray using kadane's algorithm 
// this is most efficient
#include<iostream>
#include<climits> // INT_MIN
using namespace std;

int main() {
    int arr[7]= {3,-4,5,4,-1,7,-8};
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i =0; i < 7; i++) { // it this  we just go through array
       currsum += arr[i];
       maxsum = max(currsum,maxsum);
       if(currsum < 0){ // if current sum becomes negative , it will only decrease the size of any future subarray 
        currsum = 0;
       }
    }

    cout << "the max sum of the sub array is : " << maxsum << endl;

    return 0;
}