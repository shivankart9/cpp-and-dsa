// this program prints the triangle pattern of  num but in reverse numbers using  for  loop
#include<iostream>
using namespace std;
int main() {
    int i,j;

    for(i=0;i<4;i++) {
        for(j=i+1;j>0;j--) {
            cout<<j;
            
        }
        cout<<endl;
    }

    return 0;
}