// this program explain us the concept of local scope variable
#include<iostream>
using namespace std;

int main() {
    if(3>1) {
        int x = 1; // local scope
    }

    {
      int x=2; // local scope 
    }

   // cout<< x ; // this gives error 
   // error : 'x' was not declared in this scope because it was loal to the block above
    return 0;
}