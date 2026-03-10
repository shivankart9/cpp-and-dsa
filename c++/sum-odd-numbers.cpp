// this program gives you sum of odd numbers
#include<iostream>
using namespace std;
int main()
{
    int i,n,j,sum=0;
    cout<<"upto where you want sum : ";
    cin>>n;

    
    for(i=1;i<=n;i++) {
        if(i%2!=0) {
            sum += i;
        }
    }

    cout<<sum<<endl;
    return 0;
}