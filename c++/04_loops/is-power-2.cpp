// to find  out if a number is power of 2 or not
#include<iostream>
using namespace std;

int main() {
    int num,pow=1;
    
    cout << "enter the  number : ";
    cin >> num ;
    
   while(pow < num ) {
       pow = pow * 2;
   }
   
   if (pow == num) {
       cout << "is power of  two "<< endl;
   } else {
       cout <<"is not power of two "<< endl;
   }
   
   return 0;
}