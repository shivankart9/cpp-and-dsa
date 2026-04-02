// this program prints the unique value from the array
#include<iostream>
using namespace std;

void unique_values(int arr[], int sz) {
    
    for(int i = 0; i < sz; i++) {
         int count = 0; // here we assumed count of every number zero
        for(int j = 0; j < sz; j++) {
            if(arr[i] == arr[j]) { // here it compares both array loops how much times a number comes
                count++;
            }
        }
        if(count == 1) { // here we print all numbers which comes one time
        cout << arr[i] << " ";
        }
    }

}

int main() {
    int arr[] = {2,3,4,5,6,7,6,5,4,3,2,1} , sz = 12;

    cout << "the unique values are "  ;
    unique_values(arr,sz);
    
    return 0;
}