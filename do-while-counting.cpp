// this program prints counting using do while loop
#include<iostream>
using namespace std;
int main() {
    int n,i=1;
    cout<<"upto where you  want counting : ";
    cin>>n;

    do {
        cout<<i++<<endl;// also cout<<i<<endl ; i++;
    } while(i<=n) ;
    
    return 0;
}