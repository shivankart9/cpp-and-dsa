// this program prints  the hollow triangle pattern using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j;

    for(i=0;i<4;i++) {
        // spaces
        for(j=(3-i);j>0;j--) {
            cout << " ";
        }

        cout<<"*";
        
        if(i!=0) { 
            // spaces
            for(j=0;j<2*i-1;j++){
                cout<<" ";
            }

            cout<<"*";
        }
        
        cout<<endl;
    }

    for(i=0;i<3;i++) {
        // spaces
        for(j=0;j<i+1;j++) {
            cout<<" ";
        }

        cout<<"*";

        if(i!=2) {
            // spaces
            for(j=0;j<2*(4-i)-5;j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
       

    return 0;
}