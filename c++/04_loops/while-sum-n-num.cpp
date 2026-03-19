#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i=1;
    cout<<"upto where you want sum: ";
    cin>>n;

    while(i<=n) {
        sum += i;
        i++;
    }

    cout<<sum<<endl;
    return 0;
}