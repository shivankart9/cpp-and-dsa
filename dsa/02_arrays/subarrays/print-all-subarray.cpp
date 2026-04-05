// this program prints all the elements of the all possible subarrays (brute force approach)
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    for(int st = 0; st < 5; st++) { // this loop sets the starting point of subarray
        for(int end =st; end < 5; end++) { // this loop sets the ending point 
            for(int i = st; i <= end; i++) { // this read and prints every element between those boundries
                cout << arr[i] << "," ;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}