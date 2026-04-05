// this program prints the maximum sum of the  subarray
#include<iostream>
#include<climits> // essetional for uing INT_MIN
using namespace std;

int main() {
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int maxsum = INT_MIN ; // we have not intialized with 0 if as it will give wrong answer if our whole array is -ve

    for(int st = 0; st < 7; st++) { // this loop sets the starting value of the subarray
        int currsum = 0; 
        for(int end = st; end < 7; end++) { // this loop sets the ending value of the subarray
            currsum += arr[end]; // this add the end value to next array so that it doesn't have  to cal again
            maxsum = max(currsum,maxsum); // here max is the funtion used to recive the max sum and store in the varible
        }
    }

    cout << "the max sum of the subarray is : " << maxsum << endl;

    return 0;
}