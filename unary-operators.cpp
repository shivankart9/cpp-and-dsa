//in this program there is unary operator which we will use in loops in more detail
#include<iostream>
using namespace std;
int main()
{
    //a++(post increment operator)
    int a=10;
    int b=a++;
    
    cout<<"b ="<<b<<"\n";
    cout<<"a ="<<a<<"\n";

    //++c(pre increment operator)
    int c=10;
    int d=++c;
    cout<<"d= "<<d<<"\n";
    cout<<"c ="<<c<<"\n";

    //e--(post decrement operator)
    int e=10;
    int f=e--;
    cout<<"f ="<<f<<"\n";
    cout<<"e ="<<e<<"\n";

    //--g(pre decrement operator)
    int g=10;
    int h=--g;
    cout<<"h ="<<h<<"\n";
    cout<<"g ="<<g<<"\n";
    return 0;
}