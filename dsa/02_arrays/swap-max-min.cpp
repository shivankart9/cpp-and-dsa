// this program swap the minimum number and the maximum number of the array
#include<iostream>
using namespace std;

// creating function
void swap_min_max(int arr[], int sz) {
    int indmin = 0, indmax = 0 ;//here we assumed that the min and max index is zero 
    for(int i = 0; i < sz; i++) {
        if(arr[i]<arr[indmin]) { // here we compared our assumption if any number is smaller than that we assumed so store that 
            indmin = i;
        }
        if(arr[i]>arr[indmax]) {//here we compared our assumed max number if any number is greater than that so store that
            indmax = i;
        }
    }
    swap(arr[indmin],arr[indmax]);
    
    // print the modified array
    for(int i = 0; i <sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2,3,4,5,6,7} , sz = 6;

    swap_min_max(arr,sz) ;

    return 0;
}