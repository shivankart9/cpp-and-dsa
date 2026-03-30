// this program asks user to input the data of array also asks user to set size of array
#include<iostream>
using namespace std;

int main() {
    int n ;

    cout << "how much number you want to store : " ;
    cin >> n ;

    int marks[n] ;
    cout << "enter" << n << "numbers below " << endl;

    for(int i = 0; i < n; i++) {
        cout << "enter " << i+1 << " : " ;
        cin >> marks[i];
    }

    // printing the entered number entered by user
    cout << "your entered number are : " << endl ;
    for(int j = 0; j < n; j++) {
        cout << marks[j] << endl;
    }

    return 0;
}