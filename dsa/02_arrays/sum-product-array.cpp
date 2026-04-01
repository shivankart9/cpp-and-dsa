// this program prints the product of  the array as well as the sum of the array
#include<iostream>
using namespace std;

void sum_product(int arr[], int sz) {
    int sum = 0, product = 1;

    for(int i = 0; i < sz; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "the sum of the array is : " << sum << endl;
    cout << "the product of the array is : " << product <<endl; 
}

int main() {
    int arr[] = {2,4,5,6,8,9} ,sz =6;

    sum_product(arr,sz) ;

    return 0;
}