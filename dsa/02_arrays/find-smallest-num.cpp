// this program prints which number is smallest in the array
#include<iostream>
using namespace std;

int main() {
    int num[5] = {10,50,40,2,1} , smallest;

    smallest = num[0];// assuming here that first num is smallest

    for(int i = 0; i < 5; i++) {
        if(num[i] < smallest) // checking here if any number is smaller than the num we assumed that will store after wards 
        smallest = num[i];
    }

    cout << "smallest number is " << smallest <<endl;

    return 0;
}