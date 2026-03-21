// this program explains the concept of pass by value (copy of argument is passed to function saved with different address) 
#include<iostream>
using namespace std;

// creating a function
int sum(int a,int b) {
    a = a + 10 ; //15
    b = b + 10 ;// 14
    return a+b ;
}

int main() {
    int a = 5 ,b =4;
    cout<<sum(a,b)<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
