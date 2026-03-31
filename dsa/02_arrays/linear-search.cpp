// this program prints the index of the value from the array
#include<iostream>
using namespace std;

int main() {
    int arr[7] = {4,2,7,8,1,2,5} ;

    int find ,index = -1; // default -1 means not exist

    cout << "enter number which you want to find in array : ";
    cin >> find ;

    for(int i = 0; i < 7; i++) {
        if(arr[i] == find) {
            index = i; // it stores index if the number exist in array
            break; // this stops the loop as soon as the first match is found if we enter 2 so 1 will be printed not 5
        }
    }
    cout << "index = " << index << endl;

    return 0;
}