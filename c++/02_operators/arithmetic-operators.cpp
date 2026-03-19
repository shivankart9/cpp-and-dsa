//in this  program there is all types of  arithmetic operators
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter first number: ";
    cin>> a;

    cout<<"enter second number: ";
    cin>>b;

    cout<<"sum = "<<(a+b)<<"\n";
    cout<<"subtraction = "<<(a-b)<<"\n";
    cout<<"multiply = "<<(a*b)<<"\n";
    cout<<"divide = "<<(float)a/b<<"\n";//float is written to get the decimal values
    cout<<"module = "<<(a%b)<<"\n";
    return 0;
}