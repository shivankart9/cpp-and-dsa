// this program prints the intersection of two array
#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int sz1, int sz2) {
    bool found = false ; // here we supposed we have not found any intersection
    for(int i = 0; i < sz1; i++) { 
        for(int j = 0; j < sz2; j++) {
            if(arr1[i] == arr2[j]) { // here we compare array 1 and array 2
                cout << arr1[i] << " "; // here we print the common element
                found = true; // this remebers the common number had appeared 
                break ; // after one element  is checked so it moves to next
            }
        }
    }
    // after both loops finished , we check if not found so print none
   if(!found) cout << "none";
}

int main() {
    int arr1[] = {2,3,4,5,6,7}, arr2[] = {2,3,4,8,9,0}, sz1 = 6, sz2 = 6;

    cout << "the intersection of two array are: "; 
    intersection(arr1,arr2,sz1,sz2);

    return 0;
}