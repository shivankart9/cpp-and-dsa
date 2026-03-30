// this program prints which number is largest in the array
#include<iostream>
using namespace std;

int main() {
    int largest , num[5] = {5,6,4,8,9} ;

    largest = num[0] ; // here we assumed that the first num is largest

    for(int i = 0; i < 5; i++) {
        if(num[i] > largest) // here we compared that if some value if larger than the value that we assumed so that will be stored
        largest = num[i]; // here we stored
    }

    cout << "the largest number is " << largest << endl; 
}