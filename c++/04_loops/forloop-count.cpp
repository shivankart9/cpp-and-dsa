// this prorgrams prints the  counting upto the user command by the help of  for loop
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"upto where you want counting : ";
    cin>>n;

    for(i=1;i<=n;i++) {
        cout<<i<<endl;
    }

    return 0;
}