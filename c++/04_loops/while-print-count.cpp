// this programs print the numbers/counting using while  loop
#include<iostream>
using namespace std;
int main()
{
    int count=1,n;
    cout<<"enter upto where you want counting :";
    cin>>n;

    while(count <= n) {
        cout<<count << " \n";
        count ++;
    }
   
    return 0;
}