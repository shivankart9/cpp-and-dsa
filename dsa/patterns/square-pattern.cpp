// printing square pattern using for loop
#include<iostream>
using namespace std;

int main() {
    int i,j;
    
    for(i=1;i<=4;i++) { //outer
        for(j=1;j<=4;j++) { //inner
            cout<< j<<" "; // " " for spaces
        }
        cout<<"\n";
    }

    return 0;
}